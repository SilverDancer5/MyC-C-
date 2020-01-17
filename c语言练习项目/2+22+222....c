#include<stdio.h>
int main(void)
{
    int x=0;
    int y=0;
    int i=0;
    int a,n;
        printf("please input a x:");
        scanf("%d",&a);
        printf("please input a y:");
        scanf("%d",&n);

    while (i<n)
    {
        x=a+x*10;
        y=y+x;
        i++;
    }

printf("y=%d\n",y );
return 0;

}
