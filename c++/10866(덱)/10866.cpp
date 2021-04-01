#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> dq;
	int n;
	cin >> n;
	while (n--)
	{
		string str;
		cin >> str;
		if (str == "push_back")
		{
			int num;
			cin >> num;
			dq.push_back(num);
		}
		else if (str == "push_front")
		{
			int num;
			cin >> num;
			dq.push_front(num);
		}
		else if (str == "pop_front")
		{
			if(dq.empty())
				cout << "-1\n";
			else
			{
				cout << dq.front() << '\n';
				dq.pop_front();
			}
		}
		else if (str == "pop_back")
		{
			if(dq.empty())
				cout << "-1\n";
			else
			{
				cout << dq.back() << '\n';
				dq.pop_back();
			}
		}
		else if (str == "front")
		{
			if(dq.empty())
				cout << "-1\n";
			else
			{
				cout << dq.front() << '\n';
			}
		}
		else if (str == "back")
		{
			if(dq.empty())
				cout << "-1\n";
			else
			{
				cout << dq.back() << '\n';
			}
		}
		else if (str == "empty")
		{
			if(dq.empty())
				cout << "1\n";
			else
				cout << "0\n";
		}
		else
			cout << dq.size() << '\n';
	}
}
