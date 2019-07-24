#include<stdio.h>

int main(void)
{
    int result[10]={0};
    int i,a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    d= a*b*c;
    while(d>0)
    {
        a = d/10;
        b = d%10;
        result[b]+=1;
        d/=
        10;
    }
    for(i=0;i<10;i++)
        printf("%d\n",result[i]);
        return 0;
}

