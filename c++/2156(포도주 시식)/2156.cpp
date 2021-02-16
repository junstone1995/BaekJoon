#include <iostream>
#include <algorithm>

using namespace std;



int main()
{
    int n;
    cin >> n;
    int ret[10001];
    int cnt[10001];
    cnt[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> cnt[i];
    }
    ret[0] = 0;
    ret[1] = cnt[1];
    ret[2] = cnt[1] + cnt[2];
    for(int i = 3; i<= n; i++)
    {
        ret[i] = max(ret[i - 1], max(ret[i-2] + cnt[i] ,ret[i-3]+cnt[i-1] + cnt[i]));
    }
    cout << ret[n] << '\n';
}
