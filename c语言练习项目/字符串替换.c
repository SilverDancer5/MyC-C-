#include<stdio.h>
int main()
{
  char ch[100];
  int i=0;
  gets(ch);
  while(ch[i]!='\0')
  {
    if(ch[i]>='A'&&ch[i]<='Z')
  ch[i]='A'+'Z'-ch[i];
  i++;
  }

  puts(ch);

}
