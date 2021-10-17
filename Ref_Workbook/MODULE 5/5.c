#include <stdio.h> 
#include<stdlib.h>
  
int main() 
{ 
//WRITING INTO THE FILE
    FILE *fp; 
	fp = fopen("test.txt", "w+"); 
    fputs("CS50", fp); 
    fseek(fp, 3, SEEK_SET); 
    fputs("CSE110 Problem Solving C Programming", fp);
    
//READING INTO THE FILE
    FILE *ptr;
	char ch;
	ptr=fopen("test.txt","r");
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

