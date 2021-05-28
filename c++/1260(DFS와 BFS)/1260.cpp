#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

#define MAX 1001
using namespace std;

int n,m,v;
int ret[MAX][MAX];
bool visit[MAX];
queue<int> q;
void	bfs(int idx)
{
	q.push(idx);
	visit[idx] = true;
	while(!q.empty())
	{
		idx = q.front();
		cout << idx << ' ';
		q.pop();
		for(int i = 1; i <= n ; i++)
		{
			if(visit[i] == 1 || ret[idx][i] == 0)
				continue;
				q.push(i);
				visit[i] = true;
		}
	}
}

void	dfs(int idx)
{
	cout << idx << ' ';
	visit[idx] = true;
	for(int i = 1; i<= n; i++)
	{
		if(visit[i] == 1 || ret[idx][i] == 0)
			continue;
		dfs(i);
	}
}

int main()
{
	cin >> n >> m >> v;
	int x,y;
	for (int i = 0; i< m; i++)
	{
		cin >> x >> y;
		ret[x][y] = 1;
		ret[y][x] = 1;
	}
	dfs(v);
	cout << '\n';
	memset(visit, false, MAX);
	bfs(v);
}
