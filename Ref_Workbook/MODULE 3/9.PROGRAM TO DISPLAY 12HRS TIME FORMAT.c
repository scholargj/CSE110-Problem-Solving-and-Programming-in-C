#include <stdio.h> 
#include<stdio.h> 
#include<conio.h> 
struct time 
{ 
int hours; 
int mins; 
int seconds; 
}b; 

int main() 
{ 
int status = 1; 

printf( "Enter Hours (00-23): "); 
scanf("%d", &b.hours); 
printf("Enter Minutes (00-59): "); 
scanf("%d", &b.mins); 
printf("Enter Seconds (00-59): "); 
scanf("%d", &b.seconds); 


if((b.hours >= 24 || b.hours < 0)) 
{
  printf("\nInvalid Hours.."); 
  status=0;
} 

if((b.seconds >= 60 || b.seconds < 0)) 
{
  printf("\nInvalid Seconds.."); 
  status=0;
} 

if((b.mins >= 60 || b.mins < 0)) 
{
   printf("\nInvalid Minutes.."); 
   status=0;
} 

if(status==1) 
{ 
  if(b.hours > 12) 
  { 
   b.hours-=12; 
  } 
printf("\n12 Hours Format\n"); printf("Hours: %d", b.hours); printf("\nMinutes: %d", b.mins); printf("\nSeconds: %d", b.seconds);
} 

return 0; 
}

