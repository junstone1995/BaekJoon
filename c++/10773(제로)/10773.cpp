#include <iostream>
#include <stack>

using namespace std;

stack<int> s;
int K;
int sum;

int main()
{
	cin >> K;
	for(int i = 0 ; i < K; i++)
	{
		int x;
		cin >> x;
		if (x ==0)
			s.pop();
		else
			s.push(x);
	}
	sum = 0;
	while(!s.empty())
	{
		sum += s.top();
		s.pop();
	}
	cout << sum << '\n';
}
