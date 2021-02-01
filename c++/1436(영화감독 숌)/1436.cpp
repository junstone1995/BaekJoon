#include <iostream>

using namespace std;

bool checkret(int num)
{
    while (num)
    {
        if (666 == num % 1000)
            return true;
        num /= 10;
    }
    return false;
}

int        main()
{
    int N;
    cin >> N;

    int ret = 0;
    int tmp = 0;
    while (tmp < N)
    {
        ret++;
        if(checkret(ret))
            tmp++;
    }
    cout << ret;
}
