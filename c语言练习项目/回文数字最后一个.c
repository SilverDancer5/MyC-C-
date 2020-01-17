#include<stdio.h>
int fn(int a,int n);
int main()
{
    int a,n,result;
    scanf("%d %d",&a,&n);
    result=fn(a,n);
    printf("%d",result);
    return 0;
}
int fn(int a,int n)
{
    int y,i;
    y=a;
    for(i=1;i<n;i++)
    {
        y=y*10+a;
    }
    return y;
}
