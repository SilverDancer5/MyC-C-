#include<stdio.h>
int main()
{
    int a,b,i;
    a=0;
    b=1;
    for(i=1;i<=10;i++)
    {
        a=a+b;
        b=a+b;
        printf("%d\t",a);
        printf("%d\t",b);
        a=a+b;
        b=a+b;
        printf("%d\t",a);
        printf("%d\n",b);
    }
    return 0;
}
