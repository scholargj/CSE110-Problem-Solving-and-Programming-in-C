#include<stdio.h>
int main()
{
int i;
float sum;
//Declare a array of characters : Two dimension
//Array is a data structure that has contiguous memory allocation of same type
//Declaration and initialisation as well
char code[20][5] = {"S109","D345","G67","M435"};//" " is for string ' ' single quote for character
int quantity[10]={210,145,136,100};//integer array
float rate[10]={879.00,99.25,250.56,125.25};//floating point array

float value[10];//floating point array
//Array index starts with zero
//Calculate value from quantity and rate
for(i=0;i<4;i++)
{
value[i]=quantity[i]*rate[i];//calculate each row value
sum += value[i];//calculate the final total value
}

printf("\n-------------------------------------------------------------------");
printf("\nCODE          QUANTITY           RATE                    VALUES");
for(i=0;i<4;i++)
{
printf("\n%s",code[i]);
printf("\t\t%d",quantity[i]);//\t is for tab space
printf("\t\t%.2f",rate[i]);
printf("\t\t\t%.2f",value[i]);

}
printf("\n\n\t\t\t\t\t   TOTAL VALUE:%.2f",sum);

printf("\n-------------------------------------------------------------------");
return 0;
}
