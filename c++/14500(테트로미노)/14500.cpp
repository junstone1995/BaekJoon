#include <iostream>

#define MAX 501

using namespace std;

int n,m;
int map[MAX][MAX];
bool visit[MAX][MAX];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int sum;

void dfs(int y,int x,int idx, int score)
{
	if (idx == 3)
	{
		if (sum < score)
		{
			sum = score;
			return ;
		}
	}
	for(int i = 0; i < 4 ; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m || visit[ny][nx])
			continue ;
		visit[ny][nx] = true;
		dfs(ny,nx,idx + 1, map[ny][nx] + score);
		visit[ny][nx] = false;
	}
}

void findhkjn(int y, int x)
{
	if (y + 1 < n && x + 2 < m) // ㅜ
		sum = max(sum, map[y][x] + map[y][x+1]+ map[y][x+2] + map[y+1][x+1]);
	if (y + 2 < n && x + 1 < m)// ㅏ
		sum = max(sum, map[y][x] + map[y+1][x]+ map[y+2][x] + map[y+1][x+1]);
	if (y + 2 < n && x - 1 >= 0)// ㅓ
		sum = max(sum, map[y][x+1] + map[y+1][x+1]+ map[y+1][x] + map[y+2][x+1]);
	if (y - 1 >= 0 && x + 2 < m)// ㅗ
		sum = max(sum, map[y+1][x] + map[y+1][x+1]+ map[y][x+1] + map[y+1][x+2]);
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m ; j++)
			cin >> map[i][j];
	sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m ; j++)
		{
				findhkjn(i,j);
				visit[i][j] = true;
				dfs(i,j,0,map[i][j]);
				visit[i][j] = false;
		}
	cout << sum << '\n';
}
