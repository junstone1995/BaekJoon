#include <iostream>

#define devidenum 1234567891
using namespace std;

int main()
{
	int num;
	cin >> num;
	string str;
	cin >> str;
	unsigned long long ret = 0;
	unsigned long long r = 1;
	for (int i = 0; i < str.length();i++)
	{
		ret += ((str[i] - 96) * r) % devidenum;
		r = (r * 31 % devidenum);
	}
	cout << ret % devidenum << '\n';
}
