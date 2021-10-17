#include <stdio.h> 
void disp( char a) 
{ 
printf("\n%d",a); 
} 
int main() 
{ 
int x; 
char arr[] = {10,20,8,54,54,65,24,4,87,65}; 

for (x=0; x<10; x++) 
{ 
disp (arr[x]); 
} 
return 0; 
} 

