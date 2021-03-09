#include <iostream>

using namespace std;

int arr[100];

int gcd(int a, int b)
{
    int tmp;
    if( a > b)
    {
        while(b)
        {
            tmp = a % b;
            a = b ;
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
	cin >> arr[0];
	int tmp;
	for (int i = 1; i< t; i++)
	{
		cin >> arr[i];
		tmp = gcd(arr[0],arr[i]);
		cout << arr[0] / tmp << "/" << arr[i] / tmp << '\n';
	}
}
