#include <iostream>

using namespace std;

int n,m;
int ret[100001];
int sum[100001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i= 1; i <= n;i++)
    {
        cin >> ret[i];
        sum[i] = sum[i-1] + ret[i];
    }
    while(m--)
    {
        int x,y;
        cin >> x >> y;
        cout << sum[y]-sum[x-1] << '\n';
    }
}
