#include <iostream>
#include <climits>

using namespace std;

int n,m;
long long maxnum(0);
bool flag(true);


int main()
{
    cin >> n >> m;
    long long ran[n];
    for(int i = 0; i < n; i++)
        cin >> ran[i];
    long long left = 0;
    long long right = LLONG_MAX;
    while(left <= right)
    {
        long long mid = (left + right) / 2;
        int ret = 0;
        for (int i= 0; i < n; i ++)
            ret += ran[i] / mid;
        if (ret >= m)
        {
            left = mid + 1;
            if (mid > maxnum)
                maxnum = mid;
        }
        else
            right = mid - 1;
    }
    cout << maxnum << '\n';
}

