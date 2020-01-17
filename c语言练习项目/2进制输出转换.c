#include<stdio.h>
int main()
{
   int a[10],x,b,i=0;
   printf("please input a number x:");
   scanf("%d",&x);
   for(i=0;i<10;i++)
   {
        a[i]=x%2;
        x=x/2;
        b++;




    }
    for(b=i-1;b>=0;b--)
    {


        printf("%d",a[b]);
    }
    return 0;





}
