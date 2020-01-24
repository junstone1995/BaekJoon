#include<stdio.h>

int main(void)
{
	int i = 0, j, a, b;
	int c[100000] = { 0 };
	scanf("%d", &j);
	for (i = 0; i < j; i++)
	{
		scanf("%d %d", &a, &b);
		c[i] = a + b;
	}
	for(i=0;i<j;i++)
	{
		printf("Case #%d: %d\n", i + 1, c[i]);
	}
	return 0;
}