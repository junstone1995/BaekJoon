#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i< n; i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    int m;
    cin >> m;
    for(int i = 0; i < m ; i++)
    {
        int num;
        cin >> num;

        cout << upper_bound(v.begin(),v.end(),num) - lower_bound(v.begin(),v.end(),num) << " ";
    }
    cout << '\n';
}
