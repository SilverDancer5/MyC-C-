#include<stdio.h>
typedef struct
{
    int data[100];
    int last;
}sequenList;


int main()
{

    sequenList A = {{1,3,5}, 2};
    sequenList B = {{2,4,6,8,10}, 4};
    sequenList C;
    int i=0, j=0, k=0;
    while(i<=A.last && j<=B.last)
    {
        if(A.data[i] < B.data[j])
        {
            C.data[k] = A.data[i];
            k++;
            i++;
        }
        else
        {
            C.data[k] = B.data[j];
            k++;
            j++;
        }

    }

    while(i <= A.last)
    {
        C.data[k] = A.data[i];
        k++;
        i++;
    }
    while(j <= B.last)
    {
        C.data[k] = B.data[j];
        k++;
        j++;
    }

    C.last = k;

    int a;
    for(a=0;a<C.last;a++)
    {
        printf("%d ",C.data[a]);
    }
}
