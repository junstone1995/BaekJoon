#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    int n,x;
    vector<int> v;
    stack<int> s;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    vector<int> ans(v.size(), -1);

    for(int i = 0; i< v.size(); i++)
    {
        while(!s.empty() && v[s.top()] < v[i])
        {
            ans[s.top()] = v[i];
            s.pop();
        }
        s.push(i);
    }

    for(int x : ans)
        cout << x << " ";
}
