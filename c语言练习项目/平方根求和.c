#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    double sum=0;
    printf("input a n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+sqrt(i);
    }
    printf("%.2lf",sum);
}
