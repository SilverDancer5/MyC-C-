#include <stdio.h>

int maxSubsequenceSum(int A[], int n);


int main1()
{
    int a[9] = {4,-3,5,-2,-1,2,6,-2};
    int maxSum = 0;
    maxSum = maxSubsequenceSum(a, 8);
    printf("最大子序列和：%d", maxSum);

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
        else if(thisSum < 0) //说明加上当前元素使得序列为负数，所以从下一段开始（或者负数的最大子序列和为0）
            thisSum = 0;
    }
    return maxSum;
}

