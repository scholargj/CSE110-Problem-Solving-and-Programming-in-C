#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *ptr;
	char ch;
	ptr=fopen("record.txt","r");
	if(ptr==NULL)
	{
		printf("ERROR OPENING IN THE FILE");
        exit(0);
	}
	while((ch=fgetc(ptr))!= EOF)
	{
		printf("%c",ch);
	}
	fclose(ptr);
	return 0;
}


