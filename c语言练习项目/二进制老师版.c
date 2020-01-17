#include<stdio.h>
int main()
{
    int bit[10];
    int num,i=0,n,k=0;
    printf("please input a number:");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        bit[k]=n%2;
        n=n/2;
        k++;

    }
    printf("\n %d binary is:",num);

    for (i=k-1;i>=0;i--)
     {printf("%d",bit[i]);}
    return 0;

}
