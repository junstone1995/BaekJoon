#include<stdio.h>
#include<string.h>

int main(void)
{
    int t,num,i,j,k;
    char alpa[20];
    scanf("%d",&t);
    for(i=k;k<t;k++)
        {
            scanf("%d",&num);
            scanf("%s",alpa);
            for(i=0;i<strlen(alpa);i++)
            {
                for(j=0;j<num;j++)
                    printf("%c",alpa[i]);
            }
            printf("\n");
        }
        return 0;
}