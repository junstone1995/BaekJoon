#include <iostream>
#include <climits>

using namespace std;

int t,n;
int cost[501];
int sum[501];
int dp[501][501];
int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		for(int i = 1 ; i <= n; i++)
		{
			cin >> cost[i];
			sum[i] = sum[i-1] + cost[i];
		}
		for (int i = 1; i < n; i++)
		{
			for(int j = 1; j+i <= n; j++)
			{
				int z = j + i;
				dp[j][z]= INT_MAX;

				for(int mid = j; mid < z; mid++)
				{
					dp[j][z] = min(dp[j][z],dp[j][mid] + dp[mid+1][z] + sum[z] - sum[j-1]);
				}
			}
		}
		cout << dp[1][n] << '\n';
	}

}
