#include<stdio.h>

int main(void)
{
    int num[10];
    int reminder[10000]={0};
    int i,count=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
        reminder[num[i]%42]+=1;
    }
    for(i=0;i<10000;i++)
        {
            if(reminder[i]!=0)
            count++;
        }
        printf("%d",count);
        return 0;
}