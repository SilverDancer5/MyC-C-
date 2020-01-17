#include<stdio.h>
int main()
{
    int sum=1;
    int i;
    for(i=1;i<=6;i=i+1)
    {
        sum=sum*i;
    }
    printf("sum=%d\n",sum);
    return 0;
}
