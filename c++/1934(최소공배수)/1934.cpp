#include <iostream>

using namespace std;

int gcd(int a,int b)
{
    int tmp;
    if (a > b)
    {
        while(b)
        {
            tmp = a % b;
            a = b;
            b = tmp;
        }
        return a;
    }
    else
    {
        while(a)
        {
            tmp = b % a;
            b = a;
            a = tmp;
        }
        return b;
    }
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t ;i++)
    {
        int a, b;
        cin >> a >> b;
        cout << a * b / gcd(a,b) << '\n';
    }
}
