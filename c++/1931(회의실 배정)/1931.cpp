#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

vector <pair <int,int> > ret;
int start,finish;
int n;

int main()
{
    cin >> n;
    for(int i=0; i < n; i++)
    {
        cin >> start >> finish;
        ret.push_back(make_pair(finish, start));
    }
    sort(ret.begin(),ret.end());
    start = 1;
    finish = ret[0].first;
    for(int i = 1; i < n; i++)
    {
        if (finish <= ret[i].second)
        {
            start++;
            finish = ret[i].first;
        }
    }
    cout << start << '\n';
}
