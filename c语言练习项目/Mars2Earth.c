#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

    char *fire[13]={"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    char *jinzhi[13]={"","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

int Mars2Earth(char *s)
{
    int i;
    if(s)
    {
        for(i=0;i<13;i++)
        {
            if(strcmp(s,fire[i]) == 0)
                return i;

            if(strcmp(s,jinzhi[i]) == 0)
                return i*13;

        }
    }
}

int main()
{
    int k,n;
    int i;
    int flag;
    char buffer[100];

    scanf("%d",&n);
    printf("\r");

    for(i=0;i<=n;i++)
    {
        fgets(buffer,100,stdin);
        printf("\r");

        if(isdigit(buffer[0]))
        {
            k = atoi(buffer);
            if(k/13 == 0)
                printf("%s\n",fire[k%13]);

            if(k/13 >0)
                printf("%s %s\n",jinzhi[k/13],fire[k%13]);

        }

        if(isalpha(buffer[0]))
        {

            k = Mars2Earth(strtok(buffer, " \n"));

            k += Mars2Earth(strtok(NULL, " \n"));

            printf("%d\n", k);
        }

    }

    return 0;
}
