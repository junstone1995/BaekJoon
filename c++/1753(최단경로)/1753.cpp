#include <iostream>
#include <vector>
#include <queue>

#define INF 1000000000
#define MAX 20001
using namespace std;

int v,e,start;
int dist[MAX];
vector<pair<int, int> > map[MAX];

void dijkstra()
{
	priority_queue<pair<int,int> > pq;
	pq.push(make_pair(0,start));
	dist[start] = 0;
	while(!pq.empty())
	{
		int cost = -pq.top().first;
		int cur = pq.top().second;
		pq.pop();
		for(int i = 0; i < map[cur].size(); i++)
		{
			int next = map[cur][i].first;
			int ncost = map[cur][i].second;
			if (dist[next] > cost + ncost)
			{
				dist[next] = cost + ncost;
				pq.push(make_pair(-dist[next],next));
			}
		}
	}
}

int main()
{
	cin >> v >> e >> start;
	for(int i=0; i < e; i++)
	{
		int a,b,c;
		cin >> a >> b >> c;
		map[a].push_back(make_pair(b,c));
	}
	for(int i = 1; i <= v; i++)
		dist[i] = INF;
	dijkstra();
	for(int i = 1; i<= v; i++)
	{
		if (dist[i] == INF)
			cout << "INF\n";
		else
			cout << dist[i] << '\n';
	}
}
