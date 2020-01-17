#include<stdio.h>;
int main()
{
    int m;
    printf("please input a number:");
    scanf("%d",&m);
    switch(m/10)
    {

        case 10:
        case 9:printf("A\n");break;
        case 8:printf("B\n");break;
        case 7:printf("C\n");break;
        case 6:printf("D\n");break;
        default :printf("E");
    }
    return 0;
}
