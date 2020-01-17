#include<stdio.h>
int main ()
{
    int a=1,b=1,n;
    printf("please input a n within 10 :");
    scanf("%d",&n);
    if(n>9) printf("error please reput a n");
    else
    {
        for(b=1;b<=n;b++)
        {
            for(a=1;a<=b;a++)
            {
                printf("%d*%d=%d ",a,b,a*b);
                if(a==b)
                {
                    printf("\n");
                }
            }


        }
    }
    return 0;
}
