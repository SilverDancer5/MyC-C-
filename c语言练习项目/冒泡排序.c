#include<stdio.h>
int main()
{
    int num[10],i,j;

    printf("please input ten number:\n");
    for (i=0;i<10;i++)
    {
          scanf("%d",&num[i]);
    }
        for(i=0;i<10;i++)
        {
            for(j=0;j<10-1-i;j++)
            {
                if(num[j]>num[j+1])
                {
                    int temp;
                    temp=num[j];
                    num[i]=num[j+1];
                    num[j+1]=temp;
                }
            }
        }
          printf("\n");
          for(i=0;i<10;i++)
            printf("%d\n",num[i]);







}


