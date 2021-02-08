#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int ret[N+1];
    ret[1] = 1;
    ret[2] = 2;
    for (int i = 3; i <= N; i++)
        ret[i] = (ret[i-1]+ret[i-2]) % 15746;
    cout << ret[N] << '\n';
}
