#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 25
using namespace std;


int n,cnt;
int	map[MAX][MAX];
bool visit[MAX][MAX];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
vector<int> ret;

void	DFS(int y,int x)
{
	cnt++;
	visit[y][x] = true;
	for(int i = 0 ; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= n || ny >= n)
			continue;
		if (map[ny][nx] == 1 && visit[ny][nx] == false)
			DFS(ny,nx);
	}
}

int main()
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		for(int j = 0; j < n; j++)
		{
			map[i][j] = str[j] - '0';
		}
	}
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
		{
			if(map[i][j] == 1 && visit[i][j] == false)
			{
				cnt = 0;
				DFS(i,j);
				ret.push_back(cnt);
			}
		}
	sort(ret.begin(),ret.end());
	cout << ret.size() << '\n';
	for(auto n : ret)
		cout << n << '\n';
}
