#include <iostream>
#include <queue>
#include <vector>

#define MAX 1000000000
using namespace std;

vector<pair<int ,int> > v[801];
int d[801];
int n,e;
int v1,v2,ret = MAX;
int stov1,stov2,v1tov2,v2tov1,v1ton,v2ton;
void dijkstra(int start)
{
	for(int i = 1; i <= n; i++)
		d[i] = MAX;
	d[start] = 0;
	priority_queue<pair<int,int> > pq;
	pq.push(make_pair(start,0));
	while (!pq.empty())
	{
		int cur = pq.top().first;
		int cost = -pq.top().second;
		pq.pop();
		if (d[cur] < cost)	continue;
		for(int i = 0; i < v[cur].size();i++)
		{
			int next = v[cur][i].first;
			int nextCost = cost + v[cur][i].second;
			if (nextCost < d[next])
			{
				d[next] = nextCost;
				pq.push(make_pair(next,-nextCost));
			}
		}
	}
}

int main()
{
	cin >> n >> e;

	for(int i = 1; i <= e; i++)
	{
		int x,y,z;
		cin >> x >> y >> z;
		v[x].push_back(make_pair(y,z));
		v[y].push_back(make_pair(x,z));
	}
	cin >> v1 >> v2;
	dijkstra(1);
	stov1 = d[v1];
	stov2 = d[v2];
	dijkstra(v1);
	v1tov2 = d[v2];
	v1ton = d[n];
	dijkstra(v2);
	v2tov1 = d[v1];
	v2ton = d[n];

	ret = min(ret,stov1 + v1tov2 + v2ton);
	ret = min(ret,stov2 + v2tov1 + v1ton);
	if(ret == MAX || v1tov2 == MAX || v2tov1 == MAX)
		cout << "-1\n";
	else
		cout << ret << '\n';
}
