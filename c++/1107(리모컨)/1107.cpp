#include <iostream>
#include <cstring>

using namespace std;

int n,m;
bool num[10];

bool check(int now)
{
	string s = to_string(now);
	for(int i = 0; i< s.length();i++)
	{
		if(!num[s[i]-48])
			return false;
	}
	return true;
}

int main()
{
	cin >> n >> m;
	memset(num,true,10);
	while(m--)
	{
		int number;
		cin >> number;
		num[number] = false;
	}
	string str = to_string(n);

	int mini = abs(n-100);
	for(int i = 0; i<= 1000000; i++)
	{
		if (check(i))
		{
			int tmp = abs(n-i) + (int)to_string(i).length();
			mini = min(mini,tmp);
		}
	}

	cout << mini << '\n';
}
