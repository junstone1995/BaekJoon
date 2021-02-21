#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int dp[101];

int main()
{
	int n,cnt;
	cin >> n;
	cnt = 0;
	vector<pair<int, int> > ret(n + 1);
	for(int i= 0; i< n; i++)
	{
		cin >> ret[i].first >> ret[i].second;
	}
	sort(ret.begin(),ret.end());
	for(int i= 1; i <= n; i++)
	{
		for(int j = 0; j < i; j++)
			if(ret[i].second > ret[j].second)
				if (dp[j] >= dp[i])
					dp[i] = dp[j] + 1;
		cnt = max(cnt,dp[i]);
	}
	cout << n - cnt << '\n';
}
