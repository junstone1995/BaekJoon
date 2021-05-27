#include <iostream>
#include <vector>
#include <queue>

#define MAX 10001
using namespace std;

int n,m,v;
vector<int> ret[MAX];
bool visit[MAX];

void	bfs(int idx)
{

}

void	dfs(int idx)
{
	cout << idx << ' ';
	visit[idx] = true;
	for(int i = 1; i<= n; i++)
	{
		if(visit[i] == 1 || ret[i].front() == 0)
			continue;
		dfs(i);
	}
}

int main()
{
	cin >> n >> m >> v;

}
