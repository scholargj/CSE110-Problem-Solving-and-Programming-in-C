#include<stdio.h>
int main()
{
int level,num;
float salary,gs,conveyance,entertainment,house_rent,hra,tax;
printf("\nENTER YOUR EXECUTIVE JOB NUMBER:");
scanf("%d",&num);

printf("\nENTER YOUR BASIC SALARY:");
scanf("%f",&salary);

printf("\nENTER YOUR LEVEL:");
scanf("%d",&level);

house_rent=0.25*salary;

if(level==1)
{
conveyance=1000;
entertainment=500;
}
else if(level==2)
{
conveyance=750;
entertainment=200;
}
else if(level==3)
{
conveyance=500;
entertainment=100;
}
else if(level==4)
{
conveyance=250;
entertainment=0;
}
else
printf("INVALID LEVEL INPUT");


hra=0.25*(salary+conveyance+entertainment+house_rent);
gs=hra+salary+conveyance+entertainment+house_rent;

if(gs<=2000)
tax=0;
else if(2000<gs<=4000)
tax=gs*0.03;
else if(4000<gs<=5000)
tax=gs*0.05;
else if(gs>5000)
tax=gs*0.08;
else
printf("INVALID INPUT");


printf("\nEXECUTIVE JOB NUMBER:%d",num);
printf("\nBASIC SALARY:%.3f",salary);
printf("\nLEVEL NUMBER:%d",level);
printf("\nSALARY OF THE EXECUTIVE BEFORE TAX:%.3f",gs);
printf("\nNEXT SALARY AFTER WITH HOLDING INCOME TAX:%.3f",(gs-tax));
return 0;
}
