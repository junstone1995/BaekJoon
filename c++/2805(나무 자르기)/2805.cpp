#include <iostream>
#include <algorithm>

using namespace std;

int n,m;
long long p[1000001];
long long ret;

void    bsearch(long long low, long long high)
{
    if(low > high)
        return ;
    long long mid = (low + high) / 2;
    long long sum = 0;
    for (int i = 0 ; i < n; i++)
    {
        if (p[i] > mid)
            sum += (p[i] - mid);
    }
    if(sum >= m)
    {
        if(ret < mid)
            ret = mid;
        bsearch(mid + 1, high);
    }
    else
        bsearch(low, mid - 1);
}

int main()
{
    cin >> n >> m;
    for (int i= 0 ; i< n; i++)
        cin >> p[i];
    sort(p,p+n);
    bsearch(0,p[n-1]);
    cout << ret << '\n';
}
