#include <iostream>

using namespace std;

long long n;
long long cost[100001];
long long city[100001];

int main()
{
    long long ret = 0,min;
    cin >> n;
    for(int i = 0; i < n - 1; i++)
        cin >> cost[i];
    for(int i = 0; i < n ; i++)
        cin >> city[i];
    ret = cost[0] * city[0];
    min = city[0];
    for(int i = 1; i< n; i++)
    {
        if (min > city[i])
            min = city[i];
        ret = ret + cost[i] * min;
    }
    cout << ret << '\n';
}
