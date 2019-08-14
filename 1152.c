#include<stdio.h>
#include<string.h>

int main(void)
{
    char n[1000001];
    char* result;
    int cnt=0;
    scanf("%[^\n]s",n);
    result = strtok(n," ");
    while(result != NULL)
        {
        cnt++;
        result = strtok(NULL," ");
        }
        printf("%d",cnt);
    return 0;
}
