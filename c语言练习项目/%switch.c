#includ<stdio.h>
int main()
{
    int score;
    printf("please input your score:");
    scanf("%d",score);
    switch(score/10)
    {
        case 10:
        case 9:printf("a");break;
        case 8:printf("b");break;
        case 7:printf("c");break;
        case 6:printf("d");break;
        default :printf("e");
    }
    return 0;
}
