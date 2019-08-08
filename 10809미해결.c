#include<stdio.h>

int main(void)
{
    char input[100];
    char result[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int num[]={0};
    int i=0,j=0;
    scanf("%s",input);
    for(i=0;i<26;i++)
        num[i]=-1;
    for(i=0;i<sizeof(input);i++)
        {
            for(j=0;j<sizeof(result);j++)
            {
                if(input[i]==result[j])
                    num[j]=i;
                            
            }
        }
    for(i=0;i<26;i++)
        printf("%d ",num[i]);
        return 0;

}