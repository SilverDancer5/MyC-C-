#include<stdio.h>
int main()
{
    int n,count=0,s=0,c;
    scanf("%d",&n);
   do{
    c=n%10;
    n=n/10;
    s=s+c;
    count++;
   }while(n!=0);
printf("%d %d",count,s);
}
