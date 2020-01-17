#include<stdio.h>
#include<string.h>

typedef struct WEIBO
{
    char name[25];
    int flag;
}weibo;
weibo nc[1005];

int isRepat(weibo ncs[1005], int end)
{
    int i;
    for(i=1; i<end; i++)
    {
        if(strcmp(ncs[end].name, ncs[i].name) == 0)
        {
            if(ncs[i].flag == 1)
                return 1;
        }
    }
    return 0;
}

int main()
{
    int M, N, S;
    scanf("%d %d %d", &M, &N, &S);

    int i, j=S;

    for(i=1; i<=M; i++)
    {
        scanf("%s", nc[i].name);
    }


    if(S > M)
    {
        printf("Keep going...");
        return 0;
    }
    for(i=1; i<=M; i++)
    {
        int k=i;
        if(k==j)
        {
            if(isRepat(nc, k) == 0)
            {
                printf("%s\n", nc[k].name);
                nc[k].flag = 1;
            }
            else
            {
                //k++;
                while(k<i+N)
                {
                    k++;
                    if(isRepat(nc, k) == 0)
                    {
                        printf("%s\n", nc[k].name);
                        nc[k].flag = 1;
                        break;
                    }
                }
            }
            j += N;
        }
    }


}
