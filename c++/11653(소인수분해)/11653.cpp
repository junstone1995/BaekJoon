#include <iostream>

using namespace std;

int        prime(int nb)
{
    long long i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (i * i <= nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int        main()
{
    int N;

    cin >> N;
    if (N == 1)
        return (0);
    for (int i = 2; i < N; i++)
    {
        if (prime(i))
        {
            while (N > 1)
            {
                if (N % i == 0)
                {
                    cout << i << endl;
                    N /= i;
                }
                else
                    break;
            }
        }
    }
    if (N > 1)
        cout << N << endl;
    return (0);
}
