#include <iostream>

using namespace std;

int N,retmin = 1000000001, retmax = -1000000001;
int number[11];
int operators[4];

void dfs(int ret, int idx)
{
	if (idx == N)
	{
		if(ret < retmin)
			retmin = ret;
		if(ret > retmax)
			retmax = ret;
		return ;
	}
	for(int i = 0 ; i < 4; i++)
		if (operators[i] > 0)
		{
			operators[i]--;
			if(i == 0)
				dfs(ret + number[idx] , idx +1);
			if(i == 1)
				dfs(ret - number[idx] , idx +1);
			if(i == 2)
				dfs(ret * number[idx] , idx +1);
			if(i == 3)
				dfs(ret / number[idx] , idx +1);
			operators[i]++;
		}
}

int main()
{
	cin >> N;
	for(int i = 0; i < N; i++)
		cin >> number[i];
	for(int i = 0; i < 4; i++)
		cin >> operators[i];
	dfs(number[0],1);
	cout << retmin << '\n';
	cout << retmax;
}
