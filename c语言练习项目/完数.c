#include<stdio.h>
int main()
{
    int n,i,z;
    for(n=2;n<=1000;n++)
    {
        z=0;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            z=z+i;

        }
        if(n==z) printf("%d\n",n);

    }


}
