#include<stdio.h>
int feibonaqie(int n)
{
    if(n==1||n==2) return 1;
    return feibonaqie(n-2)+feibonaqie(n-1);
}
