#include "function/func.hpp" 
#include "cppjieba/include/cppjieba/Jieba.hpp"
const int MAXN=1e5;
using namespace std;

int main(int argc, char const *argv[])
{
	string text1;
	string text2;
	string dic_words[MAXN];
	int dic_words_adr=0;
	int len_text1=0,len_text2=0;
	int vector_text1[MAXN]={0};
	int vector_text2[MAXN]={0};

    const char* const DICT_PATH = "cppjieba/dict/jieba.dict.utf8";
    const char* const HMM_PATH = "cppjieba/dict/hmm_model.utf8";
    const char* const USER_DICT_PATH = "cppjieba/dict/user.dict.utf8";
    const char* const IDF_PATH = "cppjieba/dict/idf.utf8";
    const char* const STOP_WORD_PATH = "cppjieba/dict/stop_words.utf8";
	
    cppjieba::	Jieba jieba(DICT_PATH,HMM_PATH,USER_DICT_PATH,IDF_PATH,STOP_WORD_PATH);	
	
	if(argc!=4)
    {
        printf("参数数目不对噢");
        return -1;
    }
 	
	text1=readin(argv[1]);//读入文件1 
	text2=readin(argv[2]);//读入文件2 
        		
    vector<string> words_text1;
    vector<string> words_text2;
    vector<cppjieba::Word> jiebawords;
    
//对文件1进行分词处理        
	jieba.Cut(text1, words_text1, true);
	len_text1=words_text1.size(); 
	for (int i = 0;i < len_text1 ;i++)
	{
		int flag=1;
		if(stopwords_find(words_text1[i])) continue;//去除常用词 
		for(int j = 0;j < dic_words_adr;j++){
			if(dic_words[j]==words_text1[i])
			{
				flag=0;break;
			}
		}
		if(flag)
			dic_words[dic_words_adr++]=words_text1[i];
	}
	
//对文件2处理 	
	jieba.Cut(text2, words_text2, true);
	len_text2 = words_text2.size();
	for (int i = 0;i < len_text2;i++)
	{
		int flag=1;
		if(stopwords_find(words_text2[i])) continue;//去除常用词 
		for(int j = 0;j < dic_words_adr;j++){
			if(dic_words[j]==words_text2[i])
			{
				flag=0;break;
			}
		}
		if(flag)
			dic_words[dic_words_adr++]=words_text2[i];
	}

//进行词向量统计 	
	for (int i=0;i < dic_words_adr;i++){
		for (int j=0; j<len_text1; j++){
			if(dic_words[i] == words_text1[j]){
				vector_text1[i]++;
			}
		}
		for (int j=0; j<len_text2; j++){
			if(dic_words[i] == words_text2[j]){
				vector_text2[i]++;
			}
		}
	} 
	
//余弦相似度计算 
	double sum=0,sq1=0,sq2=0,result=0;
	for (int i=0;i < dic_words_adr;i++){
		sum+=vector_text1[i]*vector_text2[i];
		sq1+=vector_text1[i]*vector_text1[i];
		sq2+=vector_text2[i]*vector_text2[i];
	}
	result=sum/(sqrt(sq1)*sqrt(sq2));
	
	writeout(argv[3],result);//输出到文件 
	
	//cout << "The run time is:" << (double)clock() /CLOCKS_PER_SEC<< "s" << endl;
    return 0;
}
