#include <stdio.h>
#include <stdlib.h>

struct ns
{
   int n1;
};

int main()
{
   int n=1;
   struct ns num;
   FILE *fptr;

   if ((fptr = fopen("record.dat","wb")) == NULL){
       printf("ERROR IN OPENING FILE");
	   exit(1);
   }

   for(n = 1; n < 100; n++)
   {
      num.n1 = n;
      fwrite(&num, sizeof(struct ns), 1, fptr); 
   }
   printf("DATA STORED SUCCESSFULLY");
   
   
   fclose(fptr); 
  
   return 0;
}


