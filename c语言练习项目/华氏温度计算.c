#include <stdio.h>
  int main ()
  {
    int fahr,lower,upper;
    double celsius;

    scanf("%d",&lower);

    scanf("%d",&upper);
    if(lower<=upper&&upper<=100)
    {
      printf("fahr celsius\n");
    for(fahr=lower;fahr<=upper;fahr=fahr+2)
    {
      celsius = (5.0/9.0)*(fahr-32);
      printf("%d%6.1f\n",fahr,celsius);
    }

    }
    else
    printf ("Invalid.");
    return 0;
  }

