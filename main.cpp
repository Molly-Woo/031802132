#include <iostream>
#include <windows.h>
#include "cppjieba/include/cppjieba/Jieba.hpp"
using namespace std;

string GbkToUtf8(const char *src_str)
{
	int len = MultiByteToWideChar(CP_ACP, 0, src_str, -1, NULL, 0);
	wchar_t* wstr = new wchar_t[len + 1];
	memset(wstr, 0, len + 1);
	MultiByteToWideChar(CP_ACP, 0, src_str, -1, wstr, len);
	len = WideCharToMultiByte(CP_UTF8, 0, wstr, -1, NULL, 0, NULL, NULL);
	char* str = new char[len + 1];
	memset(str, 0, len + 1);
	WideCharToMultiByte(CP_UTF8, 0, wstr, -1, str, len, NULL, NULL);
	string strTemp = str;
	if (wstr) delete[] wstr;
	if (str) delete[] str;
	return strTemp;
}

string readin(char const *argv)
{
	ifstream infile;
	string t,s;
	s="\0"; 
 
	infile.open(argv);
	if (!infile.is_open())
		cout << "open file failure!" << endl;
	while (!infile.eof())
	{
		infile >> t;
		s += t;
	}
	infile.close();
 	
	const char* p = s.data();
 	s = GbkToUtf8(p);
 	return s;
	
}


string Utf8ToGbk(const char *src_str)
{
	int len = MultiByteToWideChar(CP_UTF8, 0, src_str, -1, NULL, 0);
	wchar_t* wszGBK = new wchar_t[len + 1];
	memset(wszGBK, 0, len * 2 + 2);
	MultiByteToWideChar(CP_UTF8, 0, src_str, -1, wszGBK, len);
	len = WideCharToMultiByte(CP_ACP, 0, wszGBK, -1, NULL, 0, NULL, NULL);
	char* szGBK = new char[len + 1];
	memset(szGBK, 0, len + 1);
	WideCharToMultiByte(CP_ACP, 0, wszGBK, -1, szGBK, len, NULL, NULL);
	string strTemp(szGBK);
	if (wszGBK) delete[] wszGBK;
	if (szGBK) delete[] szGBK;
	return strTemp;
}

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
