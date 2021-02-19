#include <iostream>

using namespace std;

int n;
int arr[1001];
int dp[2][1001];

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	for (int i = 1; i <= n; i++)
	{
		dp[0][i] = 1;
		for (int j = 1; j <= i; j++)
		{
			if(arr[j] < arr[i] && dp[0][i] < dp[0][j] + 1)
				dp[0][i] = dp[0][j] + 1;
		}
	}

	for (int i = n; i >= 1; i--)
	{
		dp[1][i] = 1;
		for (int j = n; j >= i; j--)
		{
			if (arr[i] > arr[j] && dp[1][j] + 1 > dp[1][i])
				dp[1][i] = dp[1][j] + 1;
		}
	}
	int ret = 0;
	for (int i = 0; i <= n; i++)
	{
		if (ret < dp[0][i] + dp[1][i] - 1)
			ret = dp[0][i] + dp[1][i] - 1;
	}
	cout << ret << '\n';
}
