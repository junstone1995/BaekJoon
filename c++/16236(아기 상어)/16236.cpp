#include <iostream>
#include <queue>
using namespace std;

#define MAX 20

struct Shark
{
	int y,x,time;
};

Shark shark;
int n;
int size;
int map[MAX][MAX];
int shark_size;
int shark_eat;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < n; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 9)
			{
				shark.x = j;
				shark.y = i;
				shark.time = 0;
				shark_size = 2;
				shark_eat = 0;
				map[i][j] = 0;
			}
		}
	}

	bool is_update = true;
	while (is_update)
	{
		is_update = false;

		bool visit[MAX][MAX] = {false , };
		queue<Shark> q;
		visit[shark.y][shark.x] = true;
		q.push(shark);

		Shark caneat;
		caneat.y = 20;
		caneat.time = -1;
		while(!q.empty())
		{
			Shark cur = q.front();
			q.pop();
			if(caneat.time != -1 && caneat.time < cur.time)
			{
				break;
			}
			if(map[cur.y][cur.x] < shark_size && map[cur.y][cur.x] != 0)
			{
				is_update = true;
				if (caneat.y > cur.y || (caneat.y == cur.y && caneat.x > cur.x))
					caneat = cur;
			}
			for (int i = 0 ; i < 4 ; i++)
			{
				Shark next;
				next.y = cur.y + dy[i];
				next.x = cur.x + dx[i];
				next.time = cur.time + 1;

				if ( next.y < 0 || next.y >=n || next.x < 0 || next.x >= n)
					continue;
				if(!visit[next.y][next.x] && shark_size >= map[next.y][next.x])
				{
					visit[next.y][next.x] = true;
					q.push(next);
				}
			}
		}
		if (is_update)
		{
			shark = caneat;
			shark_eat++;
			if (shark_eat == shark_size)
			{
				shark_size++;
				shark_eat = 0;
			}
			map[shark.y][shark.x] = 0;
		}
	}
	cout << shark.time << '\n';
}
