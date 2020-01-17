#include <stdio.h>

int maxSubsequenceSum(int A[], int n);


int main1()
{
    int a[9] = {4,-3,5,-2,-1,2,6,-2};
    int maxSum = 0;
    maxSum = maxSubsequenceSum(a, 8);
    printf("��������кͣ�%d", maxSum);

}

int maxSubsequenceSum(int A[], int n)
{

    int thisSum, maxSum, i;
    thisSum = maxSum = 0;
    for(i=0; i<n; i++)
    {
        thisSum += A[i];

        if(thisSum > maxSum)
            maxSum = thisSum;
        else if(thisSum < 0) //˵�����ϵ�ǰԪ��ʹ������Ϊ���������Դ���һ�ο�ʼ�����߸�������������к�Ϊ0��
            thisSum = 0;
    }
    return maxSum;
}

