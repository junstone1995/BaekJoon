#include <iostream>

using namespace std;

	int N,cnt = 0;
	int col[15];

bool trueQueen(int i)
{
	for (int j = 0 ;j < i ; j++)
		if(col[j] == col[i] || abs(col[i]-col[j]) == (i - j))
			return false;
	return true;
}

void nQueen(int i)
{
	if (i == N)
	{
		cnt++;
		return ;
	}
	for(int j = 0; j < N; j++)
	{
		col[i] = j;
		if(trueQueen(i))
			nQueen(i+1);
	}
}

int main()
{
	cin >> N;

	nQueen(0);
	cout << cnt << '\n';
	return (0);
}
