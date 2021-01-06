#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(int argc, const char * argv[]) {
    string a,b;
    string ret = "";
    int carry = 0, shortlen;
    int x, y;

    cin >> a >> b;
    x = (int)a.size();
    y = (int)b.size();
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    shortlen = ((x >= y) ? y : x);
    for (int i = 0; i < shortlen; i++)
    {
        int tmp = carry;
        tmp = tmp + (a[i] - '0') + (b[i] - '0');
        if (tmp >= 10)
        {
            carry = 1;
            tmp -= 10;
        }
        else
            carry = 0;
        ret.append(1 , tmp + '0');
    }
    if (x > y)
    {
        for (int i = 0; i + shortlen < x; i++)
        {
            int tmp = carry;
            tmp = tmp + (a[i+shortlen] - '0');
            if (tmp >= 10)
            {
                carry = 1;
                tmp -= 10;
            }
            else
                carry = 0;
            ret.append(1, tmp + '0');
        }
    }
    else if (y > x)
    {
        for (int i = 0; i + shortlen < y; i++)
        {
            int tmp = carry;
            tmp = tmp + (b[i+shortlen] - '0');
            if (tmp >= 10)
            {
                carry = 1;
                tmp -= 10;
            }
            else
                carry = 0;
            ret.append(1, tmp + '0');
        }

    }
    if (carry == 1)
        ret.append(1, '1');
    reverse(ret.begin(),ret.end());
    cout << ret << endl;
}
