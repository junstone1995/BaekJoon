#include <iostream>

using namespace std;

int cnt[11];
int n;
int money;
int ret;

int main()
{
	cin >> n >> money;
	ret = 0;
	for(int i = 0; i < n ; i++)
		cin >> cnt[i];
	for(int i = n-1; i >= 0; i--)
	{
		ret += money / cnt[i];
		money %= cnt[i];
	}
	cout << ret << '\n';
}
