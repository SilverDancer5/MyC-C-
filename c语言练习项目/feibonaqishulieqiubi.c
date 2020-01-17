#include<stdio.h>
int main()
{
    double a,b,i,sum;
    a=2;
    b=1;
    sum=2;
    for(i=2;i<=20;i++)
    {
        a=a+b;
        b=a-b;
        sum=sum+a/b;
    }
    printf("sum=%lf",sum);
    return 0;
}
