#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *ptr;
	int n,test1,test2,roll,i,total,test3,per;
	char name[30];
	printf("ENTER THE NUMBER OF STUDENTS TO CALCULATE");
	scanf("%d",&n);
	ptr=fopen("sp.txt","w+");
	if(ptr==NULL)
	{
	  printf("ERROR IN OPENING THE FILE");
	  exit(0);	
	}
	for(i=0;i<n;i++)
	{
		printf("\nENTER THE STUDENT ROLL NO:");
		scanf("%d",&roll);
		printf("\nENTER THE STUDENT NAME:");
		getchar();
		gets(name);
		printf("\nCA1=");
		scanf("%d",&test1);
		printf("\nCA2=");
		scanf("%d",&test2);
		printf("\nCA3=");
		scanf("%d",&test3);
		total=test1+test2+test3;
		per=(total*100)/45;
		fprintf(ptr,"\nROLL NO:%d\nNAME:%s\nCA-1:%d\nCA-2:%d\nCA-3:%d\nTOTAL-MARKS:%d\nPERCENTAGE:%d",roll,name,test1,test2,test3,total,per);
	    printf("\nDATA STORED SUCCESSFULLY TO THE FILE");
	}
fclose(ptr);
return 0;
}

