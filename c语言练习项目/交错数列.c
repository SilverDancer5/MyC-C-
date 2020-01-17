#include<stdio.h>
int main()
{
    int i,n,flag=-1;
    double sum=0,item,fengmu=1,fengzi=1;

    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        item=fengzi/fengmu;
        flag=-flag;
        printf("%lf\n",item);
        sum=sum+flag*item;
        fengzi++;
        fengmu=fengmu+2;
    }
    printf("%f",sum);
    return 0;
}
