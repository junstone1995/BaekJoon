#include <iostream>

int n,r,c;
int ret;

using  namespace std;

void    divideZ(int y, int x, int size)
{
    if (r == y && c == x)
    {
        cout << ret << '\n';
        return ;
    }
    if (r < y + size && r >= y && c < x + size && c >= x)
    {
        divideZ(y,x,size/2);
        divideZ(y,x + size/2,size/2);
        divideZ(y + size/2,x,size/2);
        divideZ(y + size /2,x + size/2,size/2);
    }
    else
    {
        ret += size * size;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> r >> c;
    divideZ(0,0,1 << n);
    return (0);
}
