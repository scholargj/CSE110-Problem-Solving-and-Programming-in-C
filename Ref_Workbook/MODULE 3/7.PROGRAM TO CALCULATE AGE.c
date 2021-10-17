#include<stdio.h>
struct student
{
char unique_id[20];
char name[20];

struct dob
{
int date;
int month;
int year;
}dob[10];

struct yoa
{
int ydate;
int ymonth;
int yyear;
}yoa[10];
}s[10];

int main()
{
int n,i;
struct s;
printf("ENTER THE NUMBER OF STUDENTS TO BE ADDED:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  printf("\nENTER THE %d STUDENT UNIQUE_ID:",i+1);
  scanf("%s",s[i].unique_id);
  printf("\nENTER THE %d STUDENT NAME:",i+1);
  scanf("%s",s[i].name);
  printf("\nENTER THE %d STUDENT DATE OF YOUR BIRTHDAY:",i+1);
  scanf("%d",&s[i].dob[i].date);
  printf("\nENTER THE %d STUDENT MONTH OF YOUR BIRTHDAY:",i+1);
  scanf("%d",&s[i].dob[i].month);
  printf("\nENTER THE %d STUDENT YEAR OF YOUR BIRTHDAY:",i+1);
  scanf("%d",&s[i].dob[i].year);
  printf("\nENTER THE %d STUDENT DATE OF YOUR ADMISSION:",i+1);
  scanf("%d",&s[i].yoa[i].ydate);
printf("\nENTER THE %d STUDENT MONTH OF YOUR ADMISSION:",i+1);
  scanf("%d",&s[i].yoa[i].ymonth);
  printf("\nENTER THE %d STUDENT YEAR OF YOUR ADMISSION:",i+1);
  scanf("%d",&s[i].yoa[i].yyear);

}
printf("\nFINAL OUTPUT:");


for(i=0;i<n;i++)
{
printf("\nUNIQUE_ID:%s",s[i].unique_id);
printf("\nNAME:%s",s[i].name);
printf("\nDATE OF BIRTH:%d-%d-%d",s[i].dob[i].date,s[i].dob[i].month,s[i].dob[i].year);
printf("\nDATE OF ADMISSION:%d-%d-%d",s[i].yoa[i].ydate,s[i].yoa[i].ymonth,s[i].yoa[i].yyear);
printf("\nAGE OF THE STUDENT:%d",2020-s[i].dob[i].year);
}
return 0;
}
