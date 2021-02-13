#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<vector<int>> cost(N,vector<int>(3));
	vector<vector<int>> ret(N,vector<int>(3));

	for(int i = 0; i< N; i++)
	{
		cin>> cost[i][0] >> cost[i][1] >> cost[i][0];
	}
}
