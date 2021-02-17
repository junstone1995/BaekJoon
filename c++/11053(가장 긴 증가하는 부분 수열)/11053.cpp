#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int cnt[1001];
	int ret[1001];
	int sum = 0;
	for(int i = 0; i < n; i++)
		cin >> cnt[i];
	for(int i = 0; i < n; i++)
	{
		ret[i] = 1;
		for(int j = 0; j < i; j++)
		{
			if (cnt[i]> cnt[j])
				ret[i] = max(ret[i],ret[j] + 1);
		}
		sum = max(sum,ret[i]);
	}
	cout << sum << '\n';
}
