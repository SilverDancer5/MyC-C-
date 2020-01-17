#include<stdio.h>
int main()
{
  double  s=0,i,a;
  int n;
  a=1;
  scanf("%d",&n);
  for(i=1;i<n+1;i++)
  {
    s=s+1/a;
    a=a+2;
  }
  printf("sum = %.6f",s);
  return 0;
}
