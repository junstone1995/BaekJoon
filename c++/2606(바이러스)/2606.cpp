#include <iostream>
#include <vector>

using namespace std;

vector<int> com[101];
bool	visit[101];
int n,m;
int cnt;

void	dfs(int num)
{
	if(visit[num])
		return ;
	visit[num] = 1;
	cnt++;
	for(int i = 0; i < com[num].size();i++)
	{
		int y = com[num][i];
		dfs(y);
	}
}

int main()
{
	cin >> n >> m;
	while (m--)
	{
		int x,y;
		cin >> x >> y;
		com[x].push_back(y);
		com[y].push_back(x);
	}
	dfs(1);
	cout << cnt - 1 << '\n';
}
