#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int cmp(const void *a, const void *b)
{
    return *(int*)b - *(int*)a;
}

int main()
{
    int N, a[10001], i=0, j=0, m, n, left,right,up,down;
    scanf("%d", &N);
    n = sqrt(N);
    m = N / n;

    for(i=0; i<N; i++)
        scanf("%d", &a[i]);

    qsort(a, N, sizeof(a[0]), cmp);

    int next=0, count=1;
    int b[101][101] = {0};

    i=0,j=-1,left=0,right=n-1,up=0,down=m-1;
    while(next < N)
    {

        while(count%4 == 1)
        {
            j++;
            if(j>right)
            {
                j--;
                count++;
                break;
            }
            b[i][j] = a[next++];
        }
        right--;

        while(count%4 == 2)
        {
            i++;
            if(i>down)
            {
                i--;
                count++;
                break;
            }
            b[i][j] = a[next++];

        }
        down--;

        while(count%4 == 3)
        {
            j--;
            if(j<left)
            {
                j++;
                count++;
                break;
            }
            b[i][j] = a[next++];
        }
        left++;

        up++;
        while(count%4 == 0)
        {
            i--;
            if(i<up)
            {
                i++;
                count++;
                break;
            }
            b[i][j] = a[next++];
        }
    }

    for(i=0; i<m; i++)
    {
        printf("%2d", b[i][0]);

        for(j=1; j<n; j++)
            printf(" %2d", b[i][j]);
        printf("\n");
    }

}
