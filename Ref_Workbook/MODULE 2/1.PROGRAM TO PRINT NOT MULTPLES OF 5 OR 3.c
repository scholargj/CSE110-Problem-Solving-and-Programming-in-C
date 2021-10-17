#include<stdio.h>
//How to write a for statement : When willyou use for statement? When the limit of a 
//loop known in advance and a condition has to be checked for numbers ranging between 1 and 100
int main()
{
int i;//declare i as integer
for(i=1;i<=100;i++)
{//% is mod operator ie., reminder after division
//simple if : if condition is true, execute the true part.
if(i%3!=0)                            ///CONDITION TO PRINT NUMBERS WITHOUT MULTIPLES OF 3
{//\n is a new line, %d is a control string for printing integer to console
printf("\n%d",i);
}
}
return 0;
}
