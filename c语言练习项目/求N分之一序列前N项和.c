#include<stdio.h>
int main()
{
  double  s=0,i;
  int n;
  scanf("%d",&n);
  for(i=1;i<n+1;i++)
  {
    s=s+1/i;
  }
  printf("sum = %.6f",s);
  return 0;
}
