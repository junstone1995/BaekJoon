#include <iostream>

#define MAX 100
using namespace std;

int n;
int graph[MAX][MAX];

void	floyd()
{
	for(int k = 0; k < n ; k++)
		for(int i = 0; i < n ; i++)
			for(int j = 0 ; j < n ; j++)
				if (graph[i][k] && graph[k][j])
					graph[i][j] = 1;
}

int main()
{
	cin >> n;
	for(int i= 0 ; i< n; i++)
		for(int j = 0; j < n ; j++)
			cin >> graph[i][j];
	floyd();
	for(int i= 0 ; i< n; i++)
	{
		for(int j = 0; j < n ; j++)
			cout << graph[i][j] << ' ';
		cout << "\n";
	}
}
