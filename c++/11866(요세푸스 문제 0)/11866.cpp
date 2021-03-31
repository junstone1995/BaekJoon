#include <iostream>
#include <queue>

using namespace std;

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	queue<int> q;

	cin >> n >> k;

	for(int i = 1; i <= n ; i++)
		q.push(i);
	cout << "<";
	while(!q.empty())
	{
		for(int i = 0; i<k-1; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		q.pop();

		if(!q.empty())
			cout << ".";
	}
	cout << ">\n";
}
