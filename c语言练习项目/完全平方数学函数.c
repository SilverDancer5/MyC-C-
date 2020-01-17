#include<stdio.h>
#include<math.h>
int main()
{


int b;
for(b=1;b>0;b++)
{
    if(sqrt(b+100)==(int)sqrt(b+100)&&sqrt(b+268)==(int)sqrt(b+268))
        printf("b=%d\n",b);
}
return 0;
}
