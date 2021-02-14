#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int n;
    cin >> n;
    int cnt[301];
    int ret[301];
    for(int i = 1; i <= n; i++)
        cin >> cnt[i];
    ret[1] = cnt[1];
    ret[2] = cnt[1] + cnt[2];
    ret[3] = max(cnt[1] + cnt[3],cnt[2]+cnt[3]);
    for(int i = 4; i <= n; i++)
    {
        ret[i] = max(ret[i - 2] + cnt[i], ret[i - 3] + cnt[i - 1] + cnt[i]);
    }
    cout << ret[n] << '\n';
}
