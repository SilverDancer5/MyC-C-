
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", rand()%31);

        printf("%d\n", rand()%6);
    }
    printf("172011030 º«ÔÃÃñ\n");
    printf("171201101 º«ÔË²ý\n");
    printf("171201105 ÁõÔ£\n");
    printf("171201117 ÕÅ´ºÒ°\n");
    printf("1712011011 Ê«º­Èñ");

}


