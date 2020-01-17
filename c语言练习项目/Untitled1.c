#include<stdio.h>

int Sum(int sum[5])
{
    int i, result;
    result = 0;
    for(i=0; i<5; i++)
    {
        result += sum[i];
    }
    return result;
}

int main()
{
    int sum[5];
    int i, result;

    for(i=0; i<5; i++)
    {
        scanf("%d", &sum[i]);
    }

    result = Sum(sum);
    printf("%d", result);
    if(result > 50)
    {
        printf("平均值大于10");
    }
    else
    {
        printf("平均值小于10");
    }
}
