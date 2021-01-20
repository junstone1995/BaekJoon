#include <iostream>

using namespace std;

int        main()
{
    int N;
    int j;
    int cnt;

    cnt = 0;
    cin >> N;
    for (int i = 0; i < N ; i++)
    {
        int x;
        cin >> x;
        for (j = 2; j <= x; j++)
        {
            if (x % j == 0)
            {
                break;
            }
        }
        if (j == x)
            cnt++;
    }
    cout << cnt <<endl;
    return (0);
}
