#include<stdio.h> 
int working(int x) 
{ 
if(x%2==0) 
{ 
  printf("\nON %dth DAY CHETAN WAS WORKING AT OFFICE",x); 
} 
else 
    printf("\nON %dth DAY CHETAN WAS WORKING AT HOME",x); 
} 
int main() 
{ 
int a=10; 
int b=25; 
working(a); 
working(b); 
return 0; 
} 

