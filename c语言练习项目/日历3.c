#include<stdio.h>
int main()
{
    int nian,yue,ri,niancha,cha,xingqiji,yues,b;
    printf("please input a nian:");
    scanf("%d",&nian);
    printf("please input a yue:");
    scanf("%d",&yue);
    //printf("please input a ri:");
    //scanf("%d",&ri);
    ri=1;
    if(nian%4==0&&nian%100!=0||nian%400==0)
    {
            switch(yue)
        {
            case 1:yues=0,yue=31;break;
            case 2:yues=31,yue=29;break;
            case 3:yues=60,yue=31;break;
            case 4:yues=91,yue=30;break;
            case 5:yues=121,yue=31;break;
            case 6:yues=152,yue=30;break;
            case 7:yues=182,yue=31;break;
            case 8:yues=213,yue=31;break;
            case 9:yues=244,yue=30;break;
            case 10:yues=274,yue=31;break;
            case 11:yues=305,yue=30;break;
            case 12:yues=335,yue=31;break;
        }
    }
        else
        {
                    switch(yue)
            {
                case 1:yues=0,yue=31;break;
                case 2:yues=31,yue=28;break;
                case 3:yues=59,yue=31;break;
                case 4:yues=90,yue=30;break;
                case 5:yues=120,yue=31;break;
                case 6:yues=151,yue=30;break;
                case 7:yues=181,yue=31;break;
                case 8:yues=212,yue=31;break;
                case 9:yues=243,yue=30;break;
                case 10:yues=273,yue=31;break;
                case 11:yues=304,yue=30;break;
                case 12:yues=334,yue=31;break;

            }
        }


    int n,a=0;
    for(n=nian-1;n>1990;n--)
    {
        if(n%4==0&&n%100!=0||n%400==0)
            a=a+1;
    }
    ri=1;
    cha=(nian-1990)*365+a+yues+ri-1;
    xingqiji=cha%7;
printf("日 一 二 三 四 五 六\n");

 int rili[5][7];
int i,j;
for(i=0;i<5;i++)
    for(j=0;j<7;j++)
        rili[i][j]=0;
switch(xingqiji)
    {
        case 1:rili[0][1]=1;break;
        case 2:rili[0][2]=1;break;
        case 3:rili[0][3]=1;break;
        case 4:rili[0][4]=1;break;
        case 5:rili[0][5]=1;break;
        case 6:rili[0][6]=1;break;
        case 7:rili[0][0]=1;break;
    }
    int k=2;
    j=(xingqiji+1)%7;
    if(j!=0)
    {
        for(i=0;j<7;++j)
        {
            rili[i][j]=k;
            ++k;
        }
    }
    for(i=1;i<5;++i)
        for(j=0;j<7;++j)
        {
            if(k > yue)//这里的maxday是当前月的最大天数
            {
                i=5;//使break跳出内层循环后直接跳出外层循环
                break;
            }
            rili[i][j]=k;
            ++k;
        }
    for(i=0;i<5;++i)
    {
        for(j=0;j<7;++j)
        {
            if(rili[i][j]==0)
                printf("   ");
            else
                printf("%3d",rili[i][j]);
        }
        if(i<4)
            printf("\n");
    }



    return 0;
}
