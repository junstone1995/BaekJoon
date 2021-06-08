#include <iostream>
#include <algorithm>

#define MAX 50005

using namespace std;

int dp[MAX];

int main()
{
	int n;
	cin >> n;
	dp[0] = 0;
	dp[1] = 1;
	for(int i = 2; i <= n; i++)
	{
		int num = MAX;
		for(int j = 1; j* j <= i ; j++)
		{
			num = min(num,dp[i- j * j] + 1);
		}
		dp[i] = num;
	}
	cout << dp[n] << '\n';
}
