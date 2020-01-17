#include<stdio.h>
#include<math.h>
double fact(int n);
double funcos(int e);
int main(void)
{
    int x,i=1,e,flag=-1;
    double cos=0,item=1;
    printf("Enter a e:");
    scanf("%d",&e);
     printf("Enter a x:");
    scanf("%d",&x);

   for(i=0;;i++)
    {
            item=flag*pow(x,i)/fact(i);
            //printf("%d",fact(i));
            flag=-flag;
            cos=cos+item;
           funcos(e) ;

    }
            printf("%.2f",cos);
    return 0;
}

    double fact(int n)
    {
        int i;
        double product;
        product=1;
        for(i=2;i<=n;i=i+2)
        {
            product=product*i*(i-1);
        }
        return product;
    }

    double funcos(int e)
    {
       int item,i,x,cos;
       for(i=0;;i++)
        {
            item=pow(x,i)/fact(i);
            //printf("%d",fact(i));
            cos=cos+item;
            if(item<1e-5) break;
        }
        return funcos;
    }
