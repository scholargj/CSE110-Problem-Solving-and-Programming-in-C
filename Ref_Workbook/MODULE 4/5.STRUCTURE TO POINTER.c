#include<stdio.h> 
#include<stdlib.h> 
struct books 
{ 
int book_id; 
char book_author[100]; 
char book_title[100]; 
int price; 
}; 


int main() 
{ 
   int n,i,choice; 
   char str1[30]; 
   printf("ENTER THE NUMBER OF BOOKS TO BE ADDED:"); 
   scanf("%d",&n); 

struct books *ptr_book,book1[n]; 
ptr_book = (struct books*) malloc(n * sizeof(struct books)); 

for(i=0;i<n;i++) 
{ 
  printf("\nENTER THE %d BOOK ID:",i+1); 
  scanf("%d",&(ptr_book+i)->book_id); 
  printf("\nENTER THE %d BOOK AUTHOR:",i+1); 
  getchar(); 
  gets((ptr_book+i)->book_author); 
  printf("\nENTER THE %d BOOK TITLE:",i+1); 
  gets((ptr_book+i)->book_title); 
  printf("\nENTER THE %d PRICE OF THE BOOK:",i+1); scanf("%d",&(ptr_book+i)->price); 
} 

printf("\n1.SEARCH THE RECORD BY AUTHOR NAME"); printf("\n2.DISPLAY ALL DETAILS OF THE BOOK"); 
printf("\n3.DISPLAY AUTHOR AND BOOK TITLE HAVING PRICE > 500"); 
printf("\n\nENTER YOUR CHOICE:"); 
scanf("%d",&choice); 

if(choice==1) 
{ 
 printf("\nENTER THE AUTHOR NAME TO SEARCH IN THE RECORD:"); 
 getchar(); 
 gets(str1); 
 for(i=0;i<n;i++) 
 { 
  if(strcmpi((ptr_book+i)->book_author,str1)==0) 
  { 
   printf("\nBOOK ID:%d",(ptr_book+i)->book_id); 
   printf("\nBOOK TITLE:%s",(ptr_book+i)->book_title); 
   printf("\nBOOK AUTHOR:%s",(ptr_book+i)->book_author); 
   printf("\nBOOK PRICE:%d",(ptr_book+i)->price); 
  } 
 } 
} 


else if(choice==2) 
{ 
  int num; 
  printf("ENTER THE BOOK ID TO SEARCH:"); 
  scanf("%d",&num); 
  for(i=0;i<n;i++) 
  { 
    if((ptr_book+i)->book_id==num) 
    {  
      printf("\nBOOK ID:%d",(ptr_book+i)->book_id); 
      printf("\nBOOK TITLE:%s",(ptr_book+i)->book_title); 
      printf("\nBOOK AUTHOR:%s",(ptr_book+i)->book_author); 
      printf("\nBOOK PRICE:%d",(ptr_book+i)->price); 
	  } 
	} 
} 
else if(choice ==3) 
{ 
  for(i=0;i<n;i++) 
  { 
   if((ptr_book+i)->price >500) 
   { 
    printf("\nBOOK TITLE:%s",(ptr_book+i)->book_title); 
    printf("\nBOOK AUTHOR:%s",(ptr_book+i)->book_author); 
   } 
  } 
}

 
else 
{ 
printf("INVALID INPUT"); 
} 

return 0; 
} 

