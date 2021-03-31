#include <iostream>
#include <queue>

using namespace std;

int main()
{
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n;
	queue<int> q;

	cin >> n;
	for (int i = 1; i <= n ; i++)
		q.push(i);
	while(!q.empty())
	{
		if (q.size() == 1)
		{
			cout << q.front() << '\n';
			break;
		}
		q.pop();
		q.push(q.front());
		q.pop();
	}
}
