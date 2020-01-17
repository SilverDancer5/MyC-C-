#include <stdio.h>
#include <string.h>
char *fun(char *t)
{
      char *p = t;
      return (p+strlen(t)/2);
}
int main(void)
{
      char *str = "abcdefgh";

      str = fun(str);
      puts(str);

      return 0;
}
