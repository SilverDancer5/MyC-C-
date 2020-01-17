#include<stdio.h>
int main()
{
    char str[80],substr[80];
    int i,j,k,number=0;
    gets(str);
    gets(substr);
    for(i=0;str[i]!='\0';i++)
    {
        for(j=i,k=0;str[j]==substr[k];j++,k++)
        {
            if(substr[k+1]=='\0')
                number++;
        }
    }
    printf("%d",number);
    return 0;
}
