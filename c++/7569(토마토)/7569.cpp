#include <iostream>
#include <queue>
#include <tuple>

#define MAX 100

using namespace std;

int m,n,h,ret = 0;

queue<tuple<int, int ,int> > q;
int dx[6] = {1,-1,0,0,0,0};
int dy[6] = {0,0,1,-1,0,0};
int dz[6] = {0,0,0,0,1,-1};
int box[MAX][MAX][MAX];

int		inside(int nx,int ny,int nz)
{
	if ( nx < m && ny < n && nz < h && 0 <= nx && 0 <= ny && 0 <= nz)
        return (1);
	return (0);
}

void	BFS()
{
	while(!q.empty())
	{
		int z = get<0>(q.front());
		int y = get<1>(q.front());
		int x = get<2>(q.front());
		q.pop();
		for(int i = 0; i < 6; i++)
		{
			int nz = z + dz[i];
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(inside(nx,ny,nz) && box[nz][ny][nx] == 0)
			{
				box[nz][ny][nx] = box[z][y][x] + 1;
				q.push(make_tuple(nz,ny,nx));
			}
		}
	}
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> m >> n >> h;
	for(int z = 0; z < h; z++)
	{
		for(int y = 0; y < n; y++)
		{
			for(int x = 0; x < m; x++)
			{
				int num;
				cin >> num;
				box[z][y][x] = num;
				if (box[z][y][x] == 1)
					q.push(make_tuple(z,y,x));
			}
		}
	}
	BFS();
	for(int z = 0; z < h; z++)
	{
		for(int y = 0; y < n; y++)
		{
			for(int x = 0; x < m; x++)
			{
				if (box[z][y][x] == 0)
				{
					cout << "-1\n";
					return (0);
				}
				if (ret < box[z][y][x])
				ret = box[z][y][x];
			}
		}
	}
	cout << ret - 1 << '\n';
}
