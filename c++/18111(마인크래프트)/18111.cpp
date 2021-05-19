#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int			n,m,b;
vector<vector<int> > world(500,vector<int>(500,0));

int		chooseTime(int height)
{
	int highCnt = 0;
	int lowCnt = 0;
	for (int y = 0;  y < n; y++)
	{
		for(int x= 0; x< m; x++)
		{
			if (world[y][x] > height)
				highCnt += world[y][x] - height;
			else if (world[y][x] < height)
				lowCnt += height - world[y][x];
		}
	}
	if (highCnt == 0 && lowCnt == 0)
		return (0);
	if (lowCnt > highCnt + b)
		return (-1);
	return highCnt * 2 + lowCnt;
}

int		main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> b;

	int heightMax = 0 , heightMin = INT_MAX;
	int answerTime = INT_MAX;
	int answerHeight = 0;
	for(int y = 0; y < n; y++)
		for(int x = 0; x <m; x++)
		{
			cin >> world[y][x];
			heightMax = max(heightMax, world[y][x]);
			heightMin = min(heightMin, world[y][x]);
		}

	for (int i = heightMin; i<= heightMax; i++)
	{
		int aftertime = chooseTime(i);

		if (aftertime >= 0 && answerTime >= aftertime)
		{
			answerTime = aftertime;
			answerHeight = i;
		}
	}

	cout << answerTime << " " << answerHeight << "\n";
}
