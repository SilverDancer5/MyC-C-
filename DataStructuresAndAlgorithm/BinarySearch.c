#include<stdio.h>

int main2()
{
    int a[] = {1,4,5,6,8,9};
    int index = BinarySearch(a, 5, 6);
    printf("%d", index);

}

int BinarySearch(int A[], int x, int n)
{
    int low, high, mid;
    low = 0; high = n-1;
    while(low <= mid)
    {
        mid = (low+high) / 2;
        if(A[mid] > x)
            high = mid-1;
        else
        if(A[mid] < x)
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}
