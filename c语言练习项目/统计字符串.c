#include<stdio.h>
int main()
{
    int english=0,space=0,number=0,other=0,t=0;
    int i=0;
    char ch[100];
    gets(ch);
    while(ch[i]!='\0')
    {
        if((ch[i]>='A'&&ch[i]<='Z')||(ch[i]>='a'&&ch[i]<='z'))
            english++;
        else if(ch[i]==' ')
        space++;
        else if(ch[i]>='1'&&ch[i]<='9')
            number++;
        else other++;
        i++;
    }
    printf("%d %d %d %d",english,space,number,other);
    return 0;
}
