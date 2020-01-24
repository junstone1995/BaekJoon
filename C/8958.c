#include<stdio.h>
#include<string.h>

char score[80];
int main(void)
{
    
    int i,j,flag,result,num;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
            result=0;
            flag=1;
            scanf("%s",score);
            for(j=0;j<strlen(score);j++)
            {
                if(score[j]=='O')
                {
                    result += flag;
                    flag++;
                }
                if(score[j]=='X')
                flag =1;
            }
            printf("%d\n",result);
    }
    return 0;
    }