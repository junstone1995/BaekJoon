#include <iostream>
#include <cmath>

using namespace std;

int N;
int ret[20][20];
bool visited[20];
int ans = 2147483647;

void combteam(int idx, int cntperson)
{
	if(idx == N/2)
	{
		int start = 0;
		int rink = 0;
		for(int i= 0; i < N; i++)
			for(int j = i + 1; j < N; j++)
			{
				if(visited[i] && visited[j])
				{
					start += ret[i][j];
					start += ret[j][i];
				}
				if(!visited[i] && !visited[j])
				{
					rink += ret[i][j];
					rink += ret[j][i];
				}

			}
		ans = min(ans,abs(start-rink));
	}
	for (int i = 0; i < N; i++)
	{
		if(visited[i] == false && i > cntperson)
		{
			visited[i] = true;
			combteam(idx + 1, i);
			visited[i] = false;
		}
	}
}
int main()
{
	cin >> N;
	for(int i= 0; i < N; i++)
		for(int j= 0; j < N; j++)
			cin >> ret[i][j];
	combteam(0 , -1);
	cout << ans;
}
