#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int *n = new int[N];
	for(int i = 0 ; i < N; i++)
	{
		cin >> n[i];
	}
	sort(n,n+N);
	for(int i = 0; i < N; i++)
		cout << n[i] << '\n';
	delete[] n;
	return (0);
}
