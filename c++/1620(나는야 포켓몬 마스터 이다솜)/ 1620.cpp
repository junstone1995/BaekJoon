#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int n,m;
int low,high;
int mid;
vector<string > v1;
vector<pair<string,int> > ret;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        string str;
        cin >> str;
        v1.push_back(str);
        ret.push_back(make_pair(str,i));
    }
    sort(ret.begin(),ret.end());
    for (int i = 1; i <= m; i++)
    {
        string str;
        cin >> str;
        if (isdigit(str[0]))
        {
            int cnt;
            cnt = stoi(str);
            cout << v1[cnt - 1] << '\n';
        }
        else
        {
            low = 0;
            high = n - 1;

            while (low <= high)
            {
                mid = (low + high) / 2;
                if (ret[mid].first == str)
                {
                    cout << ret[mid].second << '\n';\
                    break;
                }
                else if (ret[mid].first < str)
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
    }
}
