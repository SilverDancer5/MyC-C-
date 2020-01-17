#include<stdio.h>
int main()
{
    double y,cos=1;
    int x,n,m,a,b,s=1,z=1,c,d;
    printf("please input a x:");
    scanf("%d",&x);

    for(n=2,c=2;n<m,c<=m;n=n+4,c++)
    {
      s=s*c;
      a=-a*a;
      a=a/s;


      for(m=4,d=2;m<x,d<=m;m=m+4,d++)
      {
          z=z*d;
          b=b*b;
          b=b/z;
          y=a+b;
          cos=cos+y;
          if(cos<1e-6) printf("%d",cos); break;
      }
    }
      return 0;
}
