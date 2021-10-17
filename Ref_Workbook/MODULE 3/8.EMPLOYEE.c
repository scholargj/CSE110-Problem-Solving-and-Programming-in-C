#include<stdio.h>

struct employee
{
int emp_id;
char emp_name[10];
int salary;
}s[10];

int main()
{
char ch;
int choice,n,i;
printf("\nENTER THE DETAILS:");
printf("\n\nENTER NUMBER OF EMPLOYEES TO BE ADDED:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  printf("\nENTER THE %d EMPLOYEE ID:",i+1);
  scanf("%d",&s[i].emp_id);
  printf("\nENTER THE %d EMPLOYEE_NAME:",i+1);
  scanf("%s",&s[i].emp_name);
  printf("\nENTER THE %d EMPLOYEE SALARY:",i+1);
  scanf("%d",&s[i].salary);
}


do
{
printf("\n1.SEARCH BY EMPLOYEE ID");
printf("\n2.DISPLAY EMPLOYEES");
printf("\n3.DISPLAY NAMES OF EMPLOYEE HAVING SALARY>25000");
printf("\nENTER YOUR CHOICE:");
scanf("%d",&choice);

if(choice==1)
{
  int semp;
  printf("ENTER THE EMPLOYEE NUMBER TO BE SEARCHED:");
  scanf("%d",&semp);
  for(i=0;i<n;i++)
  {
   if(semp==s[i].emp_id)
   {
     printf("\nFOUND IN THE RECORD");
     printf("\nEMPLOYEE_ID:%d",s[i].emp_id);
     printf("\nEMPLOYEE NAME:%s",s[i].emp_name);
     printf("\nEMPLOYEE SALARY:%d",s[i].salary);
   }
  }
}


else if(choice==2)
{
 for(i=0;i<n;i++)
  {
   printf("\nEMPLOYEE_ID:%d",s[i].emp_id);
   printf("\nEMPLOYEE NAME:%s",s[i].emp_name);
   printf("\nEMPLOYEE SALARY:%d",s[i].salary);
  }
}


else if(choice==3)
{
  printf("\nTHE LIST BELOW ARE THE SALARY >25000");
  for(i=0;i<n;i++)
  {
   if(s[i].salary>25000)
    {
     printf("\nEMPLOYEE_ID:%d",s[i].emp_id);
	 printf("\nEMPLOYEE NAME:%s",s[i].emp_name);
	 printf("\nEMPLOYEE SALARY:%d",s[i].salary);
	 printf("\n\n\n");
	}
   }
}


else
{
printf("INVALID INPUT");
}


printf ("\n\nDo you want to repeat the operation Y/N: ");
scanf (" %c", &ch);
}
while (ch == 'y' || ch == 'Y');

return 0;
}
