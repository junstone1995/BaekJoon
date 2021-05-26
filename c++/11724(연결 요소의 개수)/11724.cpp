#include <iostream>
#include <queue>

#define MAX 1001

using namespace std;

vector<int> connect[MAX];
bool visit[MAX];
int m,n,u,v;

void	bfs(int i)
{
	queue<int> q;

	visit[i] = true;
	q.push(i);
	while(!q.empty())
	{
		int cur = q.front();
		q.pop();

		int size = connect[cur].size();
		for(int i = 0; i< size;i++)
		{
			int next = connect[cur][i];
			if(!visit[next])
			{
				visit[next] = true;
				q.push(next);
			}
		}
	}
}

int main()
{
	cin >> n >> m;
	while (m--)
	{
		cin >> u >> v;
		connect[u].push_back(v);
		connect[v].push_back(u);
	}

	int cnt = 0;
	for (int i = 1; i<= n; i++)
	{
		if(!visit[i])
		{
			cnt++;
			bfs(i);
		}
	}
	cout << cnt << '\n';
}
