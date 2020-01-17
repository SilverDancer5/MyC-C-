#include<stdio.h>
int main()
{
    int n,i,j  ;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
         {
             for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
         }
    int sum=0,sun=0;
    for(i=0;i<n;i++)
        sum=sum+a[i][n-1];
    for(i=0;i<n;i++)
        sum=sum+a[n-1][i];
        int m=n-1;
    for(i=0;i<n;i++)
        {
            sum=sum+a[i][m];
            m--;
        }

     for(i=0;i<n;i++)
         {
             for(j=0;j<n;j++)
                sun=sun+a[i][j];
         }
         sun=sun-sum+a[0][n-1]+a[n-1][0]+a[n-1][n-1];
        printf("%d",sun);
}
