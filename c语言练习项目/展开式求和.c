#include<stdio.h>
#include<math.h>
double fact(int n);
int main(void)
{
    int x,i=1;
    double s=0,item=1;
    printf("Enter a x:");
    scanf("%d",&x);

   for(i=1;;i++)
    {
            item=pow(x,i)/fact(i);
            //printf("%d",fact(i));
            s=s+item;
            if(item<1e-5) break;

    }
            printf("%.2f",s);
    return 0;
}

    double fact(int n)
    {
        int i;
        double product;
        product=1;
        for(i=1;i<=n;i++)
        {
            product=product*i;
        }
        return product;
    }
