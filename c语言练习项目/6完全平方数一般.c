

#include<stdio.h>
#include<math.h>
int main()
{


int x;
float x1=1,x0=0,x2=0,x3=1,a,b;
   a=x+100;
       b=x+268;
for(x=1;x>0;x++)
{
     do
    {

       x0=x1;
       x1=0.5*(x0+a/x0);
        x2=x3;
       x3=0.5*(x2+b/x3);
 }while(fabs(x1-x0)>1e-6);


    if(a==(int)a&&b==(int)b)
        printf("x=%d\n",x);
}
return 0;
}








