#include<stdio.h> 
struct student 
{ 
int rollno; 
char name[20]; 
int age; 
}b; 


int print(int x,int y) 
{ 
printf("\nx:%d",x); 
printf("\ny:%d",y); 
} 


int main() 
{ 
printf("ENTER THE ROLL NO:"); scanf("%d",&b.rollno); 
printf("\nENTER THE AGE"); scanf("%d",&b.age); 
print(b.rollno,b.age); 
return 0; 
}

