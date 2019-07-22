#include<stdio.h>
#define MAX_SIZE 1000000
int main(void)
{
    int num[MAX_SIZE];
    int a=0,i,max,min;
    scanf("%d",&i);
    for(a=0;a<i;a++)
        {
       scanf("%d",&num[a]);
        }
        max = num[0];
        min = num[0];
    for(a=0;a<i;a++)
        {
        if(max<num[a])
            max = num[a] ;
        if(min>num[a])
            min = num[a];
        }
    printf("%d %d",min,max);
    return 0;
}