#include <iostream>

using namespace std;

int main()
{
	int dp[12];
	int t;
	cin >> t;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	while(t--)
	{
		int num;
		cin >> num;
		for (int i = 4; i <= num; i++)
			dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
		cout << dp[num] << '\n';
	}
}
