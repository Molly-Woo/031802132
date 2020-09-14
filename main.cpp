#include <iostream>
#include <windows.h>
#include "function/readin.cpp" 
#include "cppjieba/include/cppjieba/Jieba.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
	string text1;
	string text2;
	 if(argc!=3)
    {
        printf("没有两个参数噢");
        return -1;
    }
    
	text1=readin(argv[1]);
	text2=readin(argv[2]);

    const char* const DICT_PATH = "cppjieba/dict/jieba.dict.utf8";
    const char* const HMM_PATH = "cppjieba/dict/hmm_model.utf8";
    const char* const USER_DICT_PATH = "cppjieba/dict/user.dict.utf8";
    const char* const IDF_PATH = "cppjieba/dict/idf.utf8";
    const char* const STOP_WORD_PATH = "cppjieba/dict/stop_words.utf8";


    cppjieba::	Jieba jieba(DICT_PATH,
        		HMM_PATH,
        		USER_DICT_PATH,
        		IDF_PATH,
        		STOP_WORD_PATH);
        		
    vector<string> words;
    vector<cppjieba::Word> jiebawords;
    string s;
    string result;
    
	jieba.Cut(text1, words, true);
	for (int i = 0;i < words.size();i++)
	{
	cout << Utf8ToGbk(words[i].c_str()) << "/";
	}
	
	cout<<endl; 
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	jieba.Cut(text2, words, true);
	for (int i = 0;i < words.size();i++)
	{
	cout << Utf8ToGbk(words[i].c_str()) << "/";
	}
	cout << endl;
	
    return 0;
}
