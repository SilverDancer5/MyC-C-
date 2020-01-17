#include<stdio.h>
int main()
{
    double y,x;
    printf("please input a x=");
    scanf("%lf",&x);

    if(x!=10)
        {
            y=x;
         printf("y=%.1f",y);
        }
    else
    {
        y=0.1;
        printf("y=%.1f",y);
    }
    return 0;
}
