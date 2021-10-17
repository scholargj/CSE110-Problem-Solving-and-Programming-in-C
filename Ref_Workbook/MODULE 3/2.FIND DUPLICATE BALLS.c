#include <stdio.h>
int main()
{
int a[100];
int a1[100];
int a2[100];
int n,m=1,ctr=0;
int i,j;
printf("\nENTER THE NUMBER BALLS TO BE STORED IN THE ARRAY:");
scanf("%d",&n);

printf("\nENTER THE ELEMENTS:");
for(i=0;i<n;i++)
{
printf("\nENTER THE %d ELEMENT:",i+1);
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
a1[i]=a[i];
a2[i]=0;
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]==a1[j])
{
a2[j]=m;
m++;
}
}
m=1;
}
for(i=0;i<n;i++)
{
if(a2[i]==2)
ctr++;
}
printf("TOTAL NUMBER OF DUPLICATES ARE FOUND IS:%d",ctr);
printf("\n\n");
return 0;
}
