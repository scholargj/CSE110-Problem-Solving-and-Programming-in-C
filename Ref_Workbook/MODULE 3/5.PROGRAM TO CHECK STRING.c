#include<stdio.h>
int main()
{
char str[100];
char str12[100];
char str123[100];
char search[10];
char str1[100];
int pos, l, c = 0;
int c1 = 0, c2 = 0, i, j, flag,choice,temp;

printf("\n1.TO CHECK WEATHER THE SUBSTRING IS FOUND IN THE STRING");
printf("\n2.EXTRACT THE SUBSTRING FROM THE TEXT AND GIVE ITS POSITION AND LENGTH");
printf("\n3.PRINT THE VOWLES TO CONSOLE IN UPPERCASE");
printf("\nENTER THE CHOICE:");
scanf("%d",&choice);
switch(choice)
{
case 1:
	printf("ENTER THE STRING:");
    getchar();
    gets(str);
    printf("ENTER THE SUB STRING:");
    gets(search);
    while (str[c1] != '\0')
    c1++;
    while (search[c2] != '\0')
    c2++;
    for (i = 0; i <= c1 - c2; i++)
    {
    for (j = i; j < i + c2; j++)
      {
       flag = 1;
       if (str[j] != search[j - i])
       {
        flag = 0;
        break;
         }
      }
      if (flag == 1)
      break;
    }
    if (flag == 1)
    printf("SUB STRING FOUND IN THE STRING");
    else
    printf("SUB STRING NOT FOUND IN THE STRING");
    break;


case 2:
    printf("ENTER THE STRING :");
    getchar();
    gets(str12);
    printf("ENTER THE POSITION :");
    scanf("%d", &pos);
    printf("ENTER THE LENGTH FROM THE POSITION:");
    scanf("%d", &l);
    while (c < l)
    {
    str12[c] = str12[pos+c-1];
    c++;
    }
    str12[c] = '\0';
    printf("AFTER EXTRACTION:%s", str12);
    break;



case 3:
    printf("ENTER THE STRING :");
    getchar();
    gets(str123);
    i=0;
    while(str123[i]!='\0')
    {
    if(str123[i]=='a' ||str123[i]=='e' ||str123[i]=='i' ||str123[i]=='o'||str123[i]=='u')
	str123[i]=str123[i]-32;                      //CONVERTING TO UPPER CASE BY DECREMENTING THE VALUE IN ASCCI VALUE 
    i++;
    }
    printf("AFTER CONVERSION TO UPPER CASE:\n");
    puts(str123);
    break;
}

return 0;
}
