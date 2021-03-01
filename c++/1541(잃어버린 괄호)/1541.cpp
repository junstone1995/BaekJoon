#include <iostream>
#include <string>

using namespace std;

string str;

int main()
{
	string tmp = "";
	int ret = 0;
	bool minus = false;
	cin >> str;
	for(int i = 0; i< str.length(); i++)
	{
		if(str[i] == '+' || str[i] == '-' || str[i] == '\0')
		{
			if(minus)
				ret -= stoi(tmp);
			else
				ret += stoi(tmp);
			tmp = "";
			if(str[i] == '-')
				minus = true;
			continue;
		}
		tmp += str[i];
	}
	cout << ret << '\n';
}
