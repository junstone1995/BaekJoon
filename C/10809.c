#include<stdio.h>
#include<string.h>

int main(void)
{
    char input[101];
   int num[26];
    int i;
    scanf("%s",input);
    for(i=0;i<26;i++)
        num[i]=-1;
    for(i=0;i<strlen(input);i++)
    { 
        if(num[input[i]-97]==-1)
        num[input[i]-97]=i;
    }
    for(i=0;i<26;i++)
        printf("%d ",num[i]);
        return 0;

}
