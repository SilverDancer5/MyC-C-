#include<stdio.h>
int main()
{



    int a,b,c,d=1;



    for(a=2;a<1000;a++)
    {

       for (c=a-1;c>0;c=c-1)

        {
                if(a%c==0)
            {
                    d=d+c;
                if(d=a)
                    printf("%d\n",a);
            }
        }

    }
    return 0;
}
