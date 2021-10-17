#include<stdio.h>
int main()
{
int i;
for(i=1;i<=10;i++)
{
if(i%3==0)                                        //CONDITION TO MAKE THE EVERY 3RD DAY PRESENT
{
printf("\nI AM PRESENT ON %d DAY",i);

}
if(i%3!=0)                                      //CONDITION TO MAKE ALL THE DAYS ABSENT OTHER THAM EVERY 3RD DAY
{
printf("\nI AM ABSENT ON %d DAY",i);

}
}
return 0;
}
