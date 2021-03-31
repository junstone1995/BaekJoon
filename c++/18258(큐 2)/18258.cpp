#include <iostream>
#include <queue>

using namespace std;

int main()
{
	cin.tie(0);
	cin.sync_with_stdio(0);
    queue<int> q;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if (str == "push")
        {
            int num;
            cin >> num;
            q.push(num);
        }
        else if (str == "pop")
        {
            if (q.empty())
                cout << "-1\n";
            else
            {
                cout << q.front() <<'\n';
                q.pop();
            }
        }
        else if (str == "front")
        {
            if(q.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << q.front() << "\n";
            }
        }
        else if (str == "back")
        {
            if(q.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << q.back() << "\n";
            }
        }
        else if (str == "empty")
        {
            if(q.empty())
                cout << "1\n";
            else
                cout << "0\n";
        }
        else
            cout << q.size() << "\n";
    }
}
