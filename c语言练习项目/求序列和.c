#include<stdio.h>
int main()
{
    int a,n,i,sum=0,y;
    scanf("%d",&a);
    scanf("%d",&n);
    y=a;
    for(i=1;i<=n;i++)
    {
        sum=sum+y;
        y=a+y*10;
    }
    printf("%d",sum);
    return 0;
}
