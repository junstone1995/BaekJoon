#include<stdio.h>

int main(void)
{
	int H=0, M=0;
	scanf("%d %d", &H, &M);
	if (M < 60 && 44 < M)
	M = M- 45;
	else 
	{
		M += 15;
		H--;
		if (H< 0) H = 23;
	}
	printf("%d %d\n", H, M);
	return 0;
}