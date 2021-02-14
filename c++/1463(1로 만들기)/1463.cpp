#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ret[1000001];
    ret[2] = 1;
    ret[3] = 1;
    for(int i = 4; i <= n; i++)
    {
        ret[i] = ret[i-1] + 1;
        if (i % 2 == 0)
            ret[i] = min(ret[i],ret[i/2] + 1);
        if (i % 3 == 0)
            ret[i] = min(ret[i],ret[i/3] + 1);
    }
    cout << ret[n] << '\n';
}
