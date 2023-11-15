// Дано літерний рядок, який містить послідовність символів s[0], ..., s[n], ... 
// 1. Визначити число входжень в послідовність групи букв “abc”.
// 2. Замінити кожну групу букв “abc” парою зірочок “ * *”

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
int Count(const string s, const string cs)
{
	size_t pos = 0;
	int k = 0;
	while ((pos = s.find(cs, pos)) != -1)
	{
		k++;
		pos++;
	}
	return k;
}
string Change(string& s)
{
 size_t pos = 0;
 while ((pos = s.find('a', pos)) != -1)
	 if (s[pos + 1] == 'b' && s[pos+2] == 'c')
 s.replace(pos, 3, "***");
 else
 pos++;
 return s;
}
int main()
{
 string str;
 string cs = "abc";
 cout << "Enter string:" << endl;
 getline(cin, str);
 cout << "String contained " << Count(str, cs) << " groups of 'abc'" << endl;
 string dest = Change(str);
 cout << "Modified string (param) : " << str << endl;
 cout << "Modified string (result): " << dest << endl;
 return 0;
}



