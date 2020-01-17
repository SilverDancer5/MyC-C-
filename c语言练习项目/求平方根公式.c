#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    float x1=1,x0=0;
    printf("please input a number:");
    scanf("%d",&a);
    /*while(fabs(x1-x0)>1e-6)
    {
        x0=x1;
        x1=0.5*(x0+a/x0);
    }*/




    /*for(;fabs(x1-x0)>1e-6;)
    {
        x0=x1;
        x1=0.5*(x0+a/x0);
    }*/

    do
    {
        x0=x1;
        x1=0.5*(x0+a/x0);
    }while(fabs(x1-x0)>1e-6);

    printf("sqrt(%d)=%f\n",a,x1);
    return 0;
}
