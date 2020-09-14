#include<fstream>
#include<windows.h>
#include"function/func.h"

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

string reandin(int num,char const *argv[])
{
	ifstream infile;
	string t;
	vector<string> s;
 
	infile.open("agrv[0]");
	if (!infile.is_open())
		cout << "open file failure" << endl;
	while (!infile.eof())
	{
		infile >> t1;
		s1.push_back(t1);
	}
	infile.close();
 	
 	s = GbkToUtf8(s);
 	return s;
	
}
