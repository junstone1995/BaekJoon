#include <iostream>

using namespace std;

int dp[1001][1001];

int main()
{
	int n , m;
	cin >> n >> m;
	for(int i = 1; i <=n; i++)
	{
		for(int j = 0; j <= m; j++)
		{
			if(i == j || j == 0)
			{
				dp[i][j] = 1;
				continue;
			}
			dp[i][j] = (dp[i-1][j]+dp[i-1][j-1]) % 10007;
		}
	}
	cout << dp[n][m] << '\n';
}
