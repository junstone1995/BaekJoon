#include <iostream>
#include <string>

using namespace std;

string WB[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};

string BW[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};

string board[50];

int whiteFirst(int y,int x)
{
	int cnt = 0;
	for (int i = y; i < y + 8 ; i++)
		for (int j = x; j < x + 8; j++)
			if (board[i][j] != WB[i-y][j-x])
				cnt++;
}

int blackFirst(int y,int x)
{
	int cnt = 0;
	for (int i = y; i < y + 8 ; i++)
		for (int j = x; j < x + 8; j++)
			if (board[i][j] != BW[i-y][j-x])
				cnt++;
}
int main()
{
	int N,M,ret;
	cin >> N >> M;
	for (int i = 0 ; i < N; i++)
		cin >> board[i];
	ret = 2147483647;
	for (int i = 0; i + 7 < N; i++)
		for(int j = 0; j + 7 < M; j++)
			ret = min(ret , min(whiteFirst(i,j),blackFirst(i,j)));
	cout << ret << '\n';
	return (0);
}
