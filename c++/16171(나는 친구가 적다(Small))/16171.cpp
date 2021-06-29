#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	string ret;
	cin >> ret;
	string tmp = "";
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] < '0' || s[i] > '9')
			tmp += s[i];
	}
	if(tmp.find(ret) != string::npos)
	{
		cout << "1";
	}
	else
		cout << "0";
}
