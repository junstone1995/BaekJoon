#include <iostream>
#include <utility>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int rank = 1;
	pair<int,int> arr[N];
	for (int i = 0; i< N; i++)
		cin >> arr[i].first >> arr[i].second;
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
			if (arr[i].first < arr[j].first && arr[i].second < arr[j].second)
				rank++;
		cout << rank << ' ';
		rank = 1;
	}
}
