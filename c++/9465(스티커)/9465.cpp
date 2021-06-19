#include <iostream>
#include <cstring>

using namespace std;

int n,t;
int map[2][100001];
int dp[2][100001];
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> t;
	while(t--)
	{
		memset(map,0,sizeof(map));
		memset(dp,0,sizeof(dp));
		cin >> n;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cin >> map[i][j]; 
			}
		}
		dp[0][0] = dp[1][0] = 0;
		dp[0][1] = map[0][1];
		dp[1][1] = map[1][1];

		for(int i = 2; i<=n; i++)
		{
			dp[0][i] = max(dp[1][i - 1], dp[1][i-2]) + map[0][i];
			dp[1][i] = max(dp[0][i-1],dp[0][i-2]) + map[1][i];
		}
		cout << max(dp[0][n],dp[1][n]) << '\n';
	}
}