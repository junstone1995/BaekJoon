#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int tri[501][501];
	int n,ret;
	ret = 0;
	cin >> n;
	for (int i= 1; i <= n; i++)
		for(int j= 1; j <= i; j++)
			cin >> tri[i][j];
	for (int i= 1; i <= n; i++)
		for(int j= 1; j <= i; j++)
			tri[i][j] += max(tri[i-1][j-1],tri[i-1][j]);
	for(int i = 1; i <= n; i++)
		if (ret < tri[n][i])
			ret = tri[n][i];
	cout << ret << '\n';
}
