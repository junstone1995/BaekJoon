#include <iostream>
#include <cmath>

using namespace std;

bool primeNum(int num)
{
	int root;
	root = sqrt(num);
	if (root == 1)
		return true;
	if (num % 2)
	{
		for(int i = 2; i <= root; i++)
		{
			if(!(num % i))
				return false;
			if(i == root)
				return true;
		}
	}
	return false;
}

int main()
{
	int N;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		int n,half,a,b;
		cin >> n;
		half = n / 2;
		for(int j=half; j >=2; j--)
		{
			a = j;
			b = n - a;
			if(primeNum(a) && primeNum(b))
			{
				cout << a << " " << b << '\n';
				break;
			}
		}
	}
}
