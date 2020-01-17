#include<stdio.h>
int main()
{
    int n,i;
    printf("please input a number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {

        if(n%i==0) break;
if(i<n) printf("no");
    else printf("yes");

    }
    if(i<n) printf("no");
    else printf("yes");
    return 0;
}
