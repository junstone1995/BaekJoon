#include <iostream>
#include <string>

using namespace std;

int n;
char map[64][64];
string str;

void solve(int y,int x,int len)
{
    char check = map[y][x];
    for(int i = y; i < y + len; i++)
        for(int j = x; j < x + len; j++)
        {
            if (check != map[i][j])
            {
                str += '(';
                solve(y,x,len / 2);
                solve(y, x + len /2 , len /2);
                solve(y + len / 2, x, len / 2);
                solve(y + len / 2, x + len /2 , len / 2);
                str += ')';
                return ;
            }
        }
    if(check == '1')
        str +='1';
    else
        str +='0';
}

int main()
{
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> str;
        for(int j = 0 ; j < str.length(); j++)
            map[i][j] = str[j];
    }
    str = "";
    solve(0,0,n);
    cout << str << '\n';
}
