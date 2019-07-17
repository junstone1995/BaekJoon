#include<stdio.h>

int main(void)
{
    int i=0,j,a,b;
    int c[1000000]={0};
    scanf("%d",&j);
    for(i=0; i<j;i++)
        {
            scanf("%d %d",&a,&b);
            c[i]=a+b;
        }
    for(i=0; i<j;i++)
        {
            printf("%d\n",c[i]);
        }
        return 0;
}