#include <iostream>
#include <queue>

using namespace std;

int a,b;
int ret = 10000;
int cnt = 0;

void bfs(long long index,int cnt)
{
    if (index > b)    return;
    if (index == b)
        ret = min(ret,cnt);
    bfs(index*2,cnt+1);
    bfs(index*10 + 1,cnt + 1);
}

int main()
{
    cin >> a >> b;
    bfs(a,1);
    if (ret == 10000)
        cout << "-1";
    else
        cout << ret;
}
