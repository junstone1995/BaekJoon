#include <iostream>
#include <climits>
#include <queue>
#include <utility>

#define MAX 101

using namespace std;

int n,m;
int map[MAX][MAX];
bool visit[MAX][MAX];
int cnt[MAX][MAX] = {0};
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

void	BFS(int y,int x)
{
	visit[y][x] = true;
	queue<pair<int,int> > q;
	cnt[y][x] += 1;
	q.push(make_pair(y,x));
	while(!q.empty())
	{
		int xx = q.front().second;
		int yy = q.front().first;
		q.pop();
		for(int i = 0 ; i < 4 ; i++)
		{
			int nx = xx + dx[i];
			int ny = yy + dy[i];
			if(nx>= 0 && nx < m && ny >= 0 && ny < n && !visit[ny][nx] && map[ny][nx] == 1)
			{
				visit[ny][nx] = true;
				q.push(make_pair(ny,nx));
				cnt[ny][nx] = cnt[yy][xx] + 1;
			}
		}
	}
}

int main()
{
	cin >> n >> m;
	for(int i = 0; i < n ; i++)
	{
		string str;
		cin >> str;
		for(int j = 0; j < m; j++)
			map[i][j] = str[j] - '0';
	}
	BFS(0,0);
	cout << cnt[n-1][m-1] << '\n';
}
