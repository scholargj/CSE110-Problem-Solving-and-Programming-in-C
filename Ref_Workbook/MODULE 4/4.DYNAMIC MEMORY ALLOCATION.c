#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *str1;
	char temp;
	int *ptr;
	int *ptr1;	
	int n,i,sum,sum1,j;	
	printf("\nA)SUM WITH MALLOC");
	printf("\nENTER THE LIMIT OF THE ARRAY: ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
    
	for(i=0;i<n;i++)
	{
		printf("\nENTER THE ELEMENT %02d: ",i+1);
		scanf("%d",(ptr+i));
	}
	sum=0;
	for(i=0;i<n;i++)
	{
		sum+=*(ptr+i);
	}
	printf("\nSUM OF THE ARRAY USING MALLOC() IS: %d\n",sum);
	printf("\nsize of malloc:%d",sizeof(ptr));
	
   printf("\nB)SUM WITH REALLOC  OF N+5");
   ptr=realloc(ptr,n+5*sizeof(int));

	for(i=0;i<n+5;i++)
	{
		printf("\nENTER THE ELEMENTS %02d: ",i+1);
		scanf("%d",(ptr+i));
	}
    sum=0;
	for(i=0;i<n+5;i++)
	{
		sum+=*(ptr+i);
	}
	printf("\nSUM OF THE ARRAY USING REALLOC() WITH N+5 IS: %d\n",sum);
		
	free(ptr);
	
	
	printf("\nc)CONTIGIOUS MEMORY SPACE AT RUM TIME TO COMPUTE SUM OF INTEGERS WITH EXISTING SUM OF A SUB DIVISION");
    printf("\nENTER THE LIMIT OF THE ARRAY: ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
    
	for(i=0;i<n;i++)
	{
		printf("\nENTER THE ELEMENT %02d: ",i+1);
		scanf("%d", ptr+i);    
        sum = sum + *(ptr + i);
	}
	
	for(i=0;i<n;i++)
	{
		sum+=*(ptr+i);
	}
	printf("\nSUM OF THE ARRAY USING CONTIGIOUS MEMORY SPACE AT RUM TIME TO COMPUTE SUM OF INTEGERS WITH EXISTING SUM OF A SUB DIVISION AND REALLOC IS: %d\n",sum);
    printf("\nsize of malloc:%d",sizeof(ptr));
    
	
	
	printf("\nD)DYNAMIC ALLOCATE SPACE TO READ THE STRINGS AND SORT THE CHARCTERS");
    n=100;
    str1= malloc(sizeof(char) * n);
    printf("\nENTER THE STRING TO SORT");
    getchar();
	gets(str1);
    
    n = strlen(str1);
   
   printf("\nSTRING BEFORE SORTING:%s \n", str1);

   for (i = 0; i < n-1; i++) 
   {
      for (j = i+1; j < n; j++) 
	  {
         if (str1[i] > str1[j])
		  {
            temp = str1[i];
            str1[i] = str1[j];
            str1[j] = temp;
         }
      }
   }
   
   printf("\nSTRING AFTER SORTING:%s \n", str1);
   free(str1);
    
	
	return 0;
}


