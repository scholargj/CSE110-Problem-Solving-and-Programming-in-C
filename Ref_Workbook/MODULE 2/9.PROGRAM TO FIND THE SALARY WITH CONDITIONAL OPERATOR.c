#include<stdio.h>
int main()
{
float z,a;
printf("ENTER THE Z VALUE:");
scanf("%f",&z);
//syntax of conditional operator ?
//a=(z==43.0)?(a=z+1):(a=z-1);
a=z<43?z>43?(5*z)+200:800:(5.8*z)+180;
printf("%.2f",a);
//printf("%f",a);
return 0;
}
