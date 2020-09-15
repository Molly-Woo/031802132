using namespace std;

string GbkToUtf8(const char *src_str)//gbk编码文件转utf-8编码 
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

string Utf8ToGbk(const char *src_str)//utf-8编码文件转gbk编码 
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

string readin(char const *argv)//文件读入 
{
	ifstream infile;
	string t,s;
	s="\0"; 
 
	infile.open(argv);
	if (!infile.is_open()){
		cout << "open file failure!" << endl;
		return -1;
	}
		
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

void writeout(char const *argv,double result){//文件写入 
	ofstream outfile;
	
	if (!infile.is_open()){
		cout << "open file failure!" << endl;
		return -1;
	} 
		
	outfile.open(argv);	
	outfile<<fixed<<setprecision(2)<<result<<endl;
	outfile.close();
} 


