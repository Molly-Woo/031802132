#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
#include<windows.h>
using namespace std; 

string stop_wordss[2000]={"\"",".","。",",","、","！","？","：","；","`","﹑","?","＂","^","…","‘","’","“","”","〝","〞","~","\\","∕","|","|","‖","—　","(",")","〈","〉","﹞","﹝","「","」","?","?","〖","〗","】","【","?","?","』","『","〕","〔","》","《","}","{","]","[","﹐","?","﹕","︰","﹔",";","！","?","？","?"," ﹖","﹌","﹏","﹋","＇","′","ˊ","ˋ","-","―","﹫","@","︳","︴","_","ˉ","＿","￣","﹢","+","﹦","=","﹤","","<","-","?","~","﹟","#","﹩","$","﹠","&","﹪","%","﹡","*","﹨","\\","﹍","﹉","﹎","﹊","ˇ","︵","︶","︷","︸","︹","︿","﹀","︺","︽","︾","_","ˉ","﹁","﹂","﹃","﹄","︻","︼"," 的","了","the","a","an","that","those","this","that","$","0","1","2","3","4","5","6","7","8","9","?","_","“","”","、","。","《","》","一","一些","一何","一切","一则","一方面","一旦","一来","一样"," 一般","一转眼","万一","上","上下","下","不","不仅","不但","不光","不单","不只","不外乎","不如","不妨","不尽","不尽然","不得","不怕","不惟","不成","不拘","不料","不是","不比","不然","不特","不独","不管","不至于","不若","不论","不过","不问","与","与其","与其说","与否","与此同时","且","且不说","且说","两者","个","个别","临","为","为了","为什么","为何","为止","为此","为着","乃","乃至","乃至于","么"," 之","之一","之所以","之类","乌乎","乎","乘","也","也好","也罢","了","二来","于","于是","于是乎","云 云","云尔","些","亦","人","人们","人家","什么","什么样","今","介于","仍","仍旧","从","从此","从而","他","他人","他们","以","以上","以为","以便","以免","以及","以故","以期","以来","以至","以至于","以致","们","任","任何","任凭","似的","但","但凡","但是","何","何以","何况","何处","何时","余外","作为","你","你们","使","使得","例如","依","依据","依照","便于","俺","俺们","倘","倘使","倘或","倘然","倘若","借","假使","假如","假若","傥然","像","儿","先不先","光是","全体","全部","兮","关于","其","其一"," 其中","其二","其他","其余","其它","其次","具体地说","具体说来","兼之","内","再","再其次","再则","再 有","再者","再者说","再说","冒","冲","况且","几","几时","凡","凡是","凭","凭借","出于","出来","分别","则","则甚","别","别人","别处","别是","别的","别管","别说","到","前后","前此","前者","加之","加以","即","即令","即使","即便","即如","即或","即若","却","去","又","又及","及","及其","及至","反之","反而","反过来","反过来说","受到","另","另一方面","另外","另悉","只","只当","只怕","只是","只有","只消","只要","只限","叫","叮咚","可","可以","可是","可见","各","各个","各位","各种","各自","同","同时","后","后者","向","向使","向着","吓","吗","否则","吧","吧哒","吱","呀","呃","呕","呗","呜","呜呼","呢"," 呵","呵呵","呸","呼哧","咋","和","咚","咦","咧","咱","咱们","咳","哇","哈","哈哈","哉","哎","哎呀","哎哟","哗","哟","哦","哩","哪","哪个","哪些","哪儿","哪天","哪年","哪怕","哪样","哪边","哪里","哼","哼唷","唉","唯有","啊","啐","啥","啦","啪达","啷当","喂","喏","喔唷","喽","嗡","嗡嗡","嗬","嗯","嗳","嘎","嘎登","嘘","嘛","嘻","嘿","嘿嘿","因","因为","因了","因此","因着","因而","固然","在","在下","在于","地","基于","处在","多","多么","多少","大","大家","她","她们","好","如","如上","如上所述","如 下","如何","如其","如同","如是","如果","如此","如若","始而","孰料","孰知","宁","宁可","宁愿","宁肯","它","它们","对","对于","对待","对方","对比","将","小","尔","尔后","尔尔","尚且","就","就是","就是了","就是说","就算","就要","尽","尽管","尽管如此","岂但","己","已","已矣","巴","巴巴","并","并且","并 非","庶乎","庶几","开外","开始","归","归齐","当","当地","当然","当着","彼","彼时","彼此","往","待","很","得","得了","怎","怎么","怎么办","怎么样","怎奈","怎样","总之","总的来看","总的来说","总的说来","总而言之","恰恰相反","您","惟其","慢说","我","我们","或","或则","或是","或曰","或者","截至","所"," 所以","所在","所幸","所有","才","才能","打","打从","把","抑或","拿","按","按照","换句话说","换言之","据","据此","接着","故","故此","故而","旁人","无","无宁","无论","既","既往","既是","既然","时候","是","是以","是的","曾","替","替代","最","有","有些","有关","有及","有时","有的","望","朝","朝着","本","本人","本地","本着","本身","来","来着","来自","来说","极了","果然","果真","某","某个","某些","某某","根据","欤","正值","正如","正巧","正是","此","此地","此处","此外","此时","此次","此间","毋宁","每","每当","比","比及","比如","比方","没奈何","沿","沿着","漫说","焉","然则","然后","然而","照","照着","犹且","犹自","甚且","甚么","甚或","甚而","甚至","甚至于","用","用来","由","由于","由是","由此","由此可见","的","的确","的话","直到","相对而言","省得","看","眨眼","着","着呢","矣","矣乎","矣哉","离"," 竟而","第","等","等到","等等","简言之","管","类如","紧接着","纵","纵令","纵使","纵然","经","经过"," 结果","给","继之","继后","继而","综上所述","罢了","者","而","而且","而况","而后","而外","而已","而是","而言","能","能否","腾","自","自个儿","自从","自各儿","自后","自家","自己","自打","自身","至","至 于","至今","至若","致","般的","若","若夫","若是","若果","若非","莫不然","莫如","莫若","虽","虽则"," 虽然","虽说","被","要","要不","要不是","要不然","要么","要是","譬喻","譬如","让","许多","论","设使","设或","设若","诚如","诚然","该","说来","诸","诸位","诸如","谁","谁人","谁料","谁知","贼死","赖以","赶","起","起见","趁","趁着","越是","距","跟","较","较之","边","过","还","还是","还有","还要","这"," 这一来","这个","这么","这么些","这么样","这么点儿","这些","这会儿","这儿","这就是说","这时","这样","这次","这般","这边","这里","进而","连","连同","逐步","通过","遵循","遵照","那","那个","那么","那么些","那么样","那些","那会儿","那儿","那时","那样","那般","那边","那里","都","鄙人","鉴于","针对","阿","除","除了","除外","除开","除此之外","除非","随","随后","随时","随着","难道说","非但","非徒","非特","非独","靠","顺","顺着","首先","！","，","：","；","？","to","can","could","dare","do","did","does","may","might","would","should","must","will","ought","shall","need","is","a","am","are","about","according","after","against","all","almost","also","although","among","an","and","another","any","anything","approximately","as","asked","at","back","because","before","besides","between","both","but","by","call","called","currently","despite","did","do","dr","during","each","earlier","eight","even","eventually","every","everything","five","for","four","from","he","her","here","his","how","however","i","if","in","indeed","instead","it","its","just","last","like","major","many","may","maybe","meanwhile","more","moreover","most","mr","mrs","ms","much","my","neither","net","never","nevertheless","nine","no","none","not","nothing","now","of","on","once","one","only","or","other","our","over","partly","perhaps","prior","regarding","separately","seven","several","she","should","similarly","since","six","so","some","somehow","still","such","ten","that","the","their","then","there","therefore","these","they","this","those","though","three","to","two","under","unless","unlike","until","volume","we","what","whatever","whats","when","where","which","while","why","with","without","yesterday","yet","you","your","aboard","about","above","according","to","across","afore","after","against","agin","along","alongside","amid","amidst","among","amongst","anent","around","as","aslant","astride","at","athwart","bar","because","of","before","behind","below","beneath","beside","besides","between","betwixt","beyond","but","by","circa","despite","down","during","due","to","ere","except","for","from","in","inside","into","less","like","mid","midst","minus","near","next","nigh","nigher","nighest","notwithstanding","of","off","on","on","to","onto","out","out","of","outside","over","past","pending","per","plus","qua","re","round","sans","save","since","through","throughout","thru","till","to","toward","towards","under","underneath","unlike","until","unto","up","upon","versus","via","vice","with","within","without","he","her","herself","hers","him","himself","his","I","it","its","itself","me","mine","my","myself","ours","she","their","theirs","them","themselves","they","us","we","our","ourselves","you","your","yours","yourselves","yourself","this","that","these","those","\"","(",")","*LRB*","*RRB*","<dquote>","<ldquo>","<lsquo>","<rdquo>","<rsquo>","@","&","[","]","`","``","e.g.,","{","}","&quot;","&ldquo;","&rdquo;","-RRB-","-LRB-","--","a","about","above","across","after","afterwards","again","against","all","almost","alone","along","already","also","although","always","am","among","amongst","amoungst","amount","an","and","another","any","anyhow","anyone","anything","anyway","anywhere","are","around","as","at","back","be","became","because","become","becomes","becoming","been","before","beforehand","behind","being","below","beside","besides","between","beyond","bill","both","bottom","but","by","call","can","cannot","cant","co","computer","con","could","couldnt","cry","de","describe","detail","do","done","down","due","during","each","eg","eight","either","eleven","else","elsewhere","empty","enough","etc","even","ever","every","everyone","everything","everywhere","except","few","fifteen","fify","fill","find","fire","first","five","for","former","formerly","forty","found","four","from","front","full","further","get","give","go","had","has","hasnt","have","he","hence","her","here","hereafter","hereby","herein","hereupon","hers","herself","him","himself","his","how","however","hundred","i","ie","if","in","inc","indeed","interest","into","is","it","its","itself","keep","last","latter","latterly","least","less","ltd","made","many","may","me","meanwhile","might","mill","mine","more","moreover","most","mostly","move","much","must","my","myself","name","namely","neither","never","nevertheless","next","nine","no","nobody","none","noone","nor","not","nothing","now","nowhere","of","off","often","on","once","one","only","onto","or","other","others","otherwise","our","ours","ourselves","out","over","own","part","per","perhaps","please","put","rather","re","same","see","seem","seemed","seeming","seems","serious","several","she","should","show","side","since","sincere","six","sixty","so","some","somehow","someone","something","sometime","sometimes","somewhere","still","such","system","take","ten","than","that","the","their","them","themselves","then","thence","there","thereafter","thereby","therefore","therein","thereupon","these","they","thick","thin","third","this","those","though","three","through","throughout","thru","thus","to","together","too","top","toward","towards","twelve","twenty","two","un","under","until","up","upon","us","very","via","was","we","well","were","what","whatever","when","whence","whenever","where","whereafter","whereas","whereby","wherein","whereupon","wherever","whether","which","while","whither","who","whoever","whole","whom","whose","why","will","with","within","without","would","yet","you","your","yours","yourself","yourselves",":","/","（",">","）","<","!"}; 

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

bool stopwords_find(string s){
	for(int i=0;i<2000;i++){
		if(Utf8ToGbk(s.c_str())==stop_wordss[i]){
			return 1;
		}
	} 
	return 0;
}
