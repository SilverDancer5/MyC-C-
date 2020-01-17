#include<stdio.h>
int main()
{
    //int u=32,v=26;
    int u,v;
    scanf("%d %d",&u,&v);
    while(v!=0)
    {
        int temp=u%v;
        u=v;
        v=temp;

    }
    printf("%d",u);
}
