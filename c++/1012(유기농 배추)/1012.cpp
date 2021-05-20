#include <iostream>
#include <cstring>

using namespace std;

int t,n,m,k;
int ret[51][51];
bool check[51][51];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

void	dfs(int x,int y)
{
	check[x][y] = true;
	for (int i= 0; i< 4; i++)
	{
		int nx = x +dx[i];
		int ny = y +dy[i];
		if (nx >= 0 && nx < n && ny >= 0 && ny < m){
			if (ret[nx][ny] == 1)
			{
				if(!check[nx][ny])
					dfs(nx,ny);
			}
		}
		else
			continue;
	}
}

int		main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;
	while(t--)
	{
		cin >> m >> n >> k;
		int cnt = 0;
		while (k--)
		{
			int x,y;
			cin >> x >> y;
			ret[y][x] = 1;
		}
		for (int i = 0;i< n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				if(ret[i][j] == 1)
					if (!check[i][j])
					{
						cnt++;
						dfs(i,j);
					}
			}
		}
		cout << cnt << '\n';
		memset(check,false,sizeof(check));
		memset(ret,0,sizeof(ret));
	}
}
