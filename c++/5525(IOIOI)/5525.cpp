#include <iostream>

using namespace std;

int n,len,ret = 0;
string str;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> n >> len >> str;
	for(int i = 0; i < len; i++)
	{
		int cnt = 0;
		if (str[i] == 'I')
		{
			while(str[i+1] == 'O' && str[i+2] == 'I')
			{
				cnt++;
				i+=2;
				if(cnt == n)
				{
					cnt--;
					ret++;
				}
			}
		}
	}
	cout << ret << '\n';
}
