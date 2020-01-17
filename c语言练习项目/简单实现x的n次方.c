#include <stdio.h>

double mypow( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%f\n", mypow(x, n));

    return 0;
}

double mypow( double x, int n )
{
  double result=1;
  int i;
 for(i=1;i<=n;i++)
            result=result*x;

  return result;



}
