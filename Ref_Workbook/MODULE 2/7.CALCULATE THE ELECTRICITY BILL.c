#include<stdio.h>
int main()
{
char customer[10];
int units,amount;
printf("\nENTER THE CUSTOMER NAME:");
scanf("%s",&customer);

printf("\nENTER THE POWER UNITS:");
scanf("%d",&units);

if(units>=0 && units<=200)
amount=units*0.50;
else if(units>=201 && units<=400)
amount=((units-200)*0.65) +100;
else if(units>=401 && units<=600)
amount=((units-400)*0.80)+230;
else if(units>=601)
amount =((units-600)*1)+390;
else
printf("INVAID INPUT");

printf("\nCUSTOMER NAME:%s",customer);

printf("\nUNITS CONSUMED:%d",units);
printf("\nTOTAL CHARGE IS:%d",amount);

return 0;
}
