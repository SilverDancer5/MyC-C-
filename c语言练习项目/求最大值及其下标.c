#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int min,max,flag;
    max=a[n-1];
    for(i=n-2;i>=0;i--)
    {
        if(a[i]>=max)
            {
                max=a[i];
                flag=i;
            }

    }
    printf("%d %d",max,flag);
    return 0;

}
