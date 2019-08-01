#include<stdio.h>

int main(void)
{  
    int num,i,j,num2;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&num2);
        double sum=0,avg=0;
        double score[num2];

        for(j=0;j<num2;j++)
        {
            scanf("%lf",&score[j]);
            sum += score[j];
        }
        avg = sum/num2;
        int count =0;
        for(j=0;j<num2;j++)
            {
                if(avg<score[j])
                {
                    count++;
                }
            }
        printf("%.3lf%%\n",(double)count*100/num2);
    }
    return 0;
}