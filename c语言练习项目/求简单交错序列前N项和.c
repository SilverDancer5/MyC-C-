#include<stdio.h>
int main()
{
  double  s,i,a,m;
  int n;
  scanf("%d",&n);
  for(i=1,s=0,m=-1;i<=n*3;i=i+3)
  {
    m=m*(-1);
    a=m*1/i;
    s=s+a;

  }
  printf("sum = %.3f",s);
  return 0;
}

