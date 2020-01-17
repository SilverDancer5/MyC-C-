#include<stdio.h>
int main()
{
    int n,i;
    for(n=101;n<=200;n++)
   {
       for(i=2;i<=n;i++)
    {
        if(n%i==0)
        printf("n=%d\n",n);break;

    }
   }

}

