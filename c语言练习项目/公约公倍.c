
#include<stdio.h>
int main()
{



    int a,b,c,d,m,n;


    printf("please input a m:");
    scanf("%d",&m);
    printf("please input a n:");
    scanf("%d",&n);
    if(m>n)
         a=m,b=n;
    else a=n,b=m;


    /*for(c=a-1;c>0;c=c-1)
    {

        if(a%c==0)
        {
            if(b%c==0)
                printf("%d",c);break;
        }

    }*/
    while(a%c==0&&b%c==0&&c>0)
    {
        c=a-1;
        c=c-1;
        printf("%d",c);break;

    }
    return 0;
}
