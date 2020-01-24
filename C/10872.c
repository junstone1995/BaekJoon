#include<stdio.h>

int fac(int n)
{
    int i,result=1; 
    for(i=n;i>0;i--)
        result *=i;
        return result;
}
int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d\n",fac(n));
}

