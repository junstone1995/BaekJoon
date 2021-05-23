#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int num;
	priority_queue<int ,vector<int>,greater<int> > min_q;
	priority_queue<int> max_q;
	cin >> n;
	while (n--)
	{
		cin >> num;
		if (max_q.size() == min_q.size())
			max_q.push(x);
		else
			min_q.push(x);
		if (max_q.size() != 0 && min_q.size() != 0 && max_q.top() > minq.top())
		{
			int minValue = min_q.top();
			int maxValue = max_q.top();
			max_q.pop();
			min_q.pop();
			max_q.push(minValue);
			min_q.push(maxValue);
		}
		cout << max_q.top() << '\n';
	}
}
