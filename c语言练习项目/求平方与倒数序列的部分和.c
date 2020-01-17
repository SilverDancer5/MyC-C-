#include<stdio.h>
int main ()
{
  int n;
  float m,s=0;

  scanf("%f %d",&m,&n);
  do
  {
    s=s+m*m;
    s=s+1/m;
    m=m+1;
  }
  while (m<=n);
  printf("sum = %.6f",s);
}
