#include<stdio.h>
int main()
{
    int a,b,c,d,e,n;
    printf("please input a wuweishu:\n");
    scanf("%d",&n);
    a=n/10000;
    b=n%10000/1000;
    c=n%10000%1000/100;
    d=n%10000%1000%100/10;
    e=n%10000%1000%100%10;
 if(a==e&&b==d)
    {
        printf("yes");
    }
    else printf("no");

    return 0;

}
