#include<stdio.h>

int main(void)
{
	int c[100000] = {0};
	int n, x,i,a;
	scanf("%d %d", &n, &x);
	for (i = 0; i < n; i++)
	{
		scanf("%d",&a);
		if (a < x)
			printf("%d ", a);
	}
	return 0;
}