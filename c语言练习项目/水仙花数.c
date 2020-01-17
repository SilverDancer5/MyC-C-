#include<stdio.h>
int main()
{
    int m,n,a,b,c;
    printf("shuixianhuashu:\n");
    for(n=100;n<=999;n++)
    {


    a=n/100;
    b=n/10%10;
    c=n%10;
    m=a*a*a+b*b*b+c*c*c;

    if(m==n)
        printf("%d\n",n);



    }
     return 0;

}
