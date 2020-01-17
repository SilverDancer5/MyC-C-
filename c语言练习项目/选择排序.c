#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    int a[n];
    for(m=0;m<n;m++)
        scanf("%d",&a[m]);
    int i,j,k,min,temp;
    //min=a[0];
    //temp=a[0];
    for(j=0;j<n;j++)
    {
        for(i=j;i<n;i++)
        {
            min=a[j];
            if(min>a[i])
            {
                min=a[i];
                k=i;
                temp=a[j];
                a[j]=a[k];
                a[i]=temp;
            }

        }
    }

    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
