#include<stdio.h>
int main()
{



    int a,b,c,d,m,n,z;


    printf("please input a m:");
    scanf("%d",&m);
    printf("please input a n:");
    scanf("%d",&n);
    if(m>n)
         a=m,b=n;
    else a=n,b=m;
    z=m*n;


    for(c=a-1;c>0;c=c-1)
    {

        if(a%c==0)
        {
            if(b%c==0)
                z=z/c;
                printf("%d",z);break;
        }

    }
    return 0;
}
