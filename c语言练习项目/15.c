#include<stdio.h>
int main()
{
    float y,x,m,a,cos=1,sum=1;
    printf("please input a x:");
    scanf("%f",&x);
    for(m=2;;m=m+2)
    {
        x=x*x;
        sum=-sum*m*(m-1);
        y=x/sum;
        cos=cos+y;
        if(y<0) a=-y;
        else a=y;
        if(y<1e-6)
        printf("%f",y); break;

    }
    return 0;
}
