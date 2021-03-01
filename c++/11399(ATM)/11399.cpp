#include <iostream>
#include <algorithm>

using namespace std;

int people[1001];

int main()
{
    int n,ret=0;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> people[i];
    sort(people,people + n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            ret += people[j];
        }
    }
    cout << ret << '\n';
}
