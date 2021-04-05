#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int tmp(0);
vector<pair<int,int> > v;
vector<int> ans(1000001);

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(make_pair(num,i));
    }
    sort(v.begin(),v.end());
    int pivot = v[0].first;
    int cnt = 0;
    ans[v[0].second] = 0;

    for(int i = 1; i < n; i++)
    {
        if (pivot == v[i].first)
            ans[v[i].second] = cnt;
        else
        {
            ans[v[i].second] = ++cnt;
            pivot = v[i].first;
        }
    }
    for(int i = 0 ; i < n ; i++)
        cout << ans[i] << ' ';
}
