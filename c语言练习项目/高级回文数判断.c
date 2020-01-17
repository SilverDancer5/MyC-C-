#include<stdio.h>
int main()
{
    int k,x,y,z=0;
    printf("please input a number:");
    scanf("%d",&x);
    y=x;
    for(k=1;x>0;k++)
    {
        z=z*10+x%10;
        x=x/10;
    }
    if(z==y)
        printf("yes");
    else printf("no");
    return 0;

}
