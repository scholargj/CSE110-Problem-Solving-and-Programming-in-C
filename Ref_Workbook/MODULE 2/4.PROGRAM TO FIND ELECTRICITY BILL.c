#include<stdio.h>
int main()
{
int code,units,total,surcharge,total1;
printf("\nENTER THE CUSTOMER CODE:");
scanf("%d",&code);//%d is a control string for integer
//Input of customer code 
// ambersand is used for reading by address
printf("\nENTER THE NUMBER OF UNITS CONSUMED:");
scanf("%d",&units);                                    //Input of units consumed

if(units<=200)
  total = units*0.80;
else if(units<=300)
  total = units*0.90;
else
  total = units*1.5;

if(total>400)
  surcharge=total*0.15;

total1=100+surcharge+total;                               //Finding total amount bynthe sum of total and surcharge with rs 100 as metre charge
printf("\nCUSTOMER CODE IS :%d",code);

printf("\nTOTAL FARE FOR THE GIVEN %d UNITS ARE:%d",units,total1);
return 0;
}
