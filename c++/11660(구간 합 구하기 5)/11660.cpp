#include <iostream>

using namespace std;

int n, m;
int map[1025][1025],dp[1025][1025];
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> map[i][j];
			dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + map[i][j];
		}
	}
	int x1,y1,x2,y2;
	int ans;
	for (int i = 0; i< m; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		ans = dp[x2][y2] - dp[x1-1][y2] - dp[x2][y1-1] + dp[x1-1][y1-1];
		cout << ans << '\n';
	}
}
