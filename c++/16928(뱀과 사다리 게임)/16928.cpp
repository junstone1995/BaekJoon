#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int n,m;
int map[101];
int snake[101];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	while(n--)
	{
		int start;
		cin >> start;
		cin >> snake[start];
	}
	while(m--)
	{
		int start;
		cin >> start;
		cin >> snake[start];
	}
	queue<int> q;
	memset(map,-1,sizeof(map));
	q.push(1);
	map[1] = 0;
	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		for(int i = 1; i <= 6; i++)
		{
			int nx = x + i;
			if (nx > 100)
				continue;
			if(snake[nx] != 0)
				nx = snake[nx];
			if (map[nx] == -1)
			{
				map[nx] = map[x] + 1;
				q.push(nx);
			}
		}
	}
	cout << map[100] << '\n';
}
