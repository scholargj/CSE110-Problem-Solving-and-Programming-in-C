#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *ptr;
	char ch;
	int n,i,roll_no,mark;
	char str1[20];
	ptr=fopen("srenath.txt","w");
	if(ptr==NULL)
	{
		printf("ERROR OPENING IN THE FILE");
        exit(0);
	}
	printf("\nENTER THE NUMBER OF STUDENTS TO ADD:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nENTER THE %d STUDENT ROLL NO:",i+1);
		scanf("%d",&roll_no);
		printf("\nENTER THE %d STUDENT NAME",i+1);
		getchar();
		gets(str1);
		printf("\nENTER THE %d TOTAL MARK:",i+1);
		scanf("%d",&mark);
		
		fprintf(ptr,"\nNAME:%s \n STUDENT ROLL NO:%d \n               TOTAL MARK:%d",str1,roll_no,mark);
		printf("DATAS IMPORTED SUCCESSFULLY TO THE FILE GIVEN");
	}
	
	fclose(ptr);
	return 0;
}

