#include<stdio.h>
#include<math.h>
int main(void)
{
    int money,year;
    double rate,sum;
    printf("Enter money:");
    scanf("%d",&money);
    printf("Enter year:");
    scanf("%d",&year);
    printf("Enter rate:");
    scanf("%lf",&rate);
    sum=money*pow(1+rate,year);
    printf("sum=%.2f\n",sum);
    return 0;
}
