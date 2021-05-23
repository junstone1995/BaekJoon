#include <iostream>
#include <queue>
#include <utility>

using namespace std;

#define MAX 100001

int n,k;
bool visit[MAX];
int cnt;

int		BFS(int n, int k)
{
	queue<pair <int , int> > q;
	q.push(make_pair(n,0));
	visit[n] = true;

	while(!q.empty())
	{
		int line = q.front().first;
		int time = q.front().second;
		q.pop();

		if (line == k)
			return time;
		if (line + 1 < MAX && !visit[line+1])
		{
			q.push(make_pair(line+1, time +1));
			visit[line + 1] = true;
		}
		if (line - 1 >= 0 && !visit[line-1])
		{
			q.push(make_pair(line -1 ,time + 1));
			visit[line - 1] = true;
		}
		if (line * 2 < MAX && !visit[line * 2])
		{
			q.push(make_pair(line * 2, time + 1));
			visit[line * 2] = true;
		}
	}
}

int main()
{
	cin >> n >> k;

	cout << BFS(n,k) << '\n';
	return (0);
}
