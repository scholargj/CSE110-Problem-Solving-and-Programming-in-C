#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
char str[1000];
int a=0, d=0, pc=0, i=0;
printf("ENTER THE STRING : ");
gets(str);
while(str[i]!='\0')
{
  if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
  {
  a++;
  }
  else if(str[i]>='0' && str[i]<='9')
  {
  d++;
  }
  else if(str[i] == '!' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '-' || str[i] == '\'' || str[i] == '\"' || str[i] == ':')
  {
  pc++;
  }
i++;
}
printf("NUMBER OF ALPHABETS IN THE STRING : %d\n",a);

printf("NUMBER OF DIGITS IN THE STRING : %d\n",d);
printf("NUMBER OF PUNCTUATION IN THE STRING: %d\n\n",pc);

return 0;
}
