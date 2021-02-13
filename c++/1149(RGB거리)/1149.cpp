#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>

using namespace std;

int min(int a,int b)
{
	if (a > b)
		return b;
	else
		return a;
}

int min(int a,int b,int c)
{
	int ret;
	ret = a;
	if (a > b)
		ret = b;
	if (ret > c)
		ret = c;
	return ret;
}

int main()
{
	int N;
	cin >> N;
	vector<vector<int>> cost(N,vector<int>(3));
	vector<vector<int>> dp(N,vector<int>(3));

	for(int i = 0; i< N; i++)
	{
		cin>> cost[i][0] >> cost[i][1] >> cost[i][2];
	}
	dp[0][0] = cost[0][0];
	dp[0][1] = cost[0][1];
	dp[0][2] = cost[0][2];
	for (int i = 1; i < N; i++)
	{
		dp[i][0] = cost[i][0] + min(dp[i -1][1] , dp[i-1][2]);
		dp[i][1] = cost[i][1] + min(dp[i -1][0] , dp[i-1][2]);
		dp[i][2] = cost[i][2] + min(dp[i -1][1] , dp[i-1][0]);
	}
	cout << min(dp[n-1][0],dp[n-1][1],dp[n-1][2]);
}
