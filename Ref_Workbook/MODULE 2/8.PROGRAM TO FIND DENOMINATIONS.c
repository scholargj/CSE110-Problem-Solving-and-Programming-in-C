#include<stdio.h>
int main()
{
int a,r500,r100,r1000;
printf("ENTER THE AMOUNT:");
scanf("%d",&a);//Read the amount from keyboard

r1000=a/1000;//to find number of 1000's
a=a%1000;//to remove the 1000's denomination. reminder after
r500=a/500;//to find number of 500's
a=a%500;//to remove the 500's denomination
r100=a/100;//to find number of 100's
a=a%100;//to remove the 100 denominations


printf("\nFINAL REPORT");
printf("\nDENOMINATIONS OF 1000 IS:%d",r1000);
printf("\nDENOMINATIONS OF 500 IS:%d",r500);
printf("\nDENOMINATIONS OF 100 IS:%d",r100);

return 0;
}


