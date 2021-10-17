#include<stdio.h>
#include<string.h>
int main(){
char rack[10][20]={"C for me","C for you","C for ron","C for all","C john","C for jack"};
char find[]="C for all";
int n=6,i=0;
for(i=0;i<n;i++)
{
if(strcmpi(rack[i],find)==0)
{
printf("Book found at position %d! ",i+1);
}
}
return 0;
}
