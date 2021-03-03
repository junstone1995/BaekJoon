#include <iostream>
#include <algorithm>

using namespace std;

int arr[101];
int sol[500];

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
	int n,m,cnt=0;
	cin >> n;
	for(int i =0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	m = arr[1]-arr[0];
	for(int i =2 ; i < n; i++)
	{
		m = gcd(m,arr[i] - arr[i-1]);
	}
	for(int i = 1; i*i <= m;i++)
	{
		if( m % i == 0)
		{
			sol[cnt++] = i;
			if ( i != m / i)
				sol[cnt++] = m /i;
		}
	}
	sort(sol,sol+cnt);
	for(int i = 0; i< cnt; i++)
		if(sol[i] != 1)
			cout << sol[i] << " ";
}
