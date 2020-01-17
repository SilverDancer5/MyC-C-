#include<stdio.h>
int main()
{
    int nian,yue,ri,niancha,cha,xingqiji;
    printf("please input a nian:");
    scanf("%d",&nian);
    printf("please input a yue:");
    scanf("%d",&yue);
    printf("please input a ri:");
    scanf("%d",&ri);
    if(nian%4==0&&nian%100!=0||nian%400==0)
    {
            switch(yue)
        {
            case 1:yue=0;break;
            case 2:yue=31;break;
            case 3:yue=60;break;
            case 4:yue=91;break;
            case 5:yue=121;break;
            case 6:yue=152;break;
            case 7:yue=182;break;
            case 8:yue=213;break;
            case 9:yue=244;break;
            case 10:yue=274;break;
            case 11:yue=305;break;
            case 12:yue=335;break;
        }
    }
        else
        {
                    switch(yue)
            {
                case 1:yue=0;break;
                case 2:yue=31;break;
                case 3:yue=59;break;
                case 4:yue=90;break;
                case 5:yue=120;break;
                case 6:yue=151;break;
                case 7:yue=181;break;
                case 8:yue=212;break;
                case 9:yue=243;break;
                case 10:yue=273;break;
                case 11:yue=304;break;
                case 12:yue=334;break;
            }
        }


    int n,a=0;
    for(n=nian-1;n>1990;n--)
    {
        if(n%4==0&&n%100!=0||n%400==0)
            a=a+1;
    }
    cha=(nian-1990)*365+a+yue+ri-1;
    xingqiji=cha%7;
    switch(xingqiji)
    {
                case 6:printf("please input a :日");break;
                case 0:printf("please input a :一");break;
                case 1:printf("please input a :二");break;
                case 2:printf("please input a :三");break;
                case 3:printf("please input a :四");break;
                case 4:printf("please input a :五");break;
                case 5:printf("please input a :六");break;


    }
    return 0;
}
