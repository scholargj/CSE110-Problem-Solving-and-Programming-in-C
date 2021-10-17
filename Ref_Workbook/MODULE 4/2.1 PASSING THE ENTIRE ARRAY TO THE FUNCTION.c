#include<stdio.h> 
int array(int x,int y,int z) 
{ 
printf("\n%d",x); 
printf("\n%d",y); 
printf("\n%d",z); 
} 
int main() 
{ 
int n[]={45,87,54,86,54}; 
array(n[1],n[3],n[4]); 
return 0; 
} 

