#include<stdio.h>
int main()
{
char gender;
int year,choice,salary;
printf("\nENTER THE GENDER(M|F):");
scanf("%c",&gender);//%c is control string for character
if(gender=='M' || gender=='m')
{
   printf("\nENTER YOUR NUMBER OF YEAR SERVICE:");
   scanf("%d",&year);
   if(year>=15)
   {
   printf("\n1.POST-GRADUATE");
   printf("\n2.GRADUATE");

   while(1)//while is a control statement (1) means true
   {
   printf("\nENTER YOUR CHOICE:");
   scanf("%d",&choice);
   if(choice==1 || choice==2)
   break;//end of execution (or) quit the loop

   else
   continue;//skip the current iteration and move to next iteration
   }

   if(choice==1)
   salary=20000;
   else
   salary=10000;

printf("\nFINAL REPORT:");
printf("\nSALARY FOR THE PERSON IS:%d",salary);

}


else if(year<10)
{
printf("\n1.POST-GRADUATE");
printf("\n2.GRADUATE");
while(1)
{
printf("\nENTER YOUR CHOICE:");
scanf("%d",&choice);
    if(choice==1 || choice==2)
    break;
    else
    continue;
}
if(choice==1)
             salary=18000;
else
     salary=8000;
printf("\nFINAL REPORT:");
printf("\nSALARY FOR THE PERSON IS:%d",salary);

}


else
printf("\nYOU ARE NOT QUALIFIED FOR THISCATEGORY \nExitting!!!");
}

else if(gender=='F'|| gender=='f')
{
printf("\nENTER YOUR NUMBER OF YEAR SERVICE:");
scanf("%d",&year);
if(year>=15)
{
  printf("\n1.POST-GRADUATE");
  printf("\n2.GRADUATE");
  while(1)
  {
   printf("\nENTER YOUR CHOICE:");
   scanf("%d",&choice);


   if(choice==1 || choice==2)
   break;
   else
   continue;
   }

if(choice==1)
salary=19000;
else
salary=9000;

printf("\nFINAL REPORT:");
printf("SALARY FOR THE PERSON IS:%d",salary);

}
else if(year<10)
{
printf("\n1.POST-GRADUATE");
printf("\n2.GRADUATE");
while(1)
{
printf("\nENTER YOUR CHOICE");
scanf("%d",&choice);
if(choice==1 || choice==2)
            break;
else
    continue;
}


if(choice==1)
salary=17500;

else
salary=7500;
printf("\nFINAL REPORT:");
printf("\nSALARY FOR THE PERSON IS:%d",salary);

}
else
printf("\nYOU ARE NOT QUALIFIED FOR THIS CATEGORY\nExitting!!!");
}


else
{
printf("\nSORRY ENTERED INVALID INPUT");
}
return 0;
}
