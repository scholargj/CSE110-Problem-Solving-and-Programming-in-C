#include<stdio.h>
#include<math.h>
int main()
{
float
pi=3.14,r=10,h=5,m1=34,m2=12,g=9.8,a=15,b=3,x=90,mass=98,acceleration=43,height=23,velocity=34;
//formatted Output Statement
printf("\n AREA \t:%.2f",(pi*r*r)+(2*pi*r*h));                               //FORMULA TO FIND AREA
printf("\n TORQUE:%.3f",((2*m1*m2)/(m1+m2))*g);                           //FORMULA TO FIND TORQUE
printf("\nSIDE:%.2f",sqrt((a*a)+(b*b)-2*a*b*cos(x)));                    //FORMULA TO FIND SIDE
printf("\nENERGY:%.2f",mass*(acceleration*height+((velocity*velocity)/2)));     //FORMULA TO FIND ENERGY

return 0;
}
