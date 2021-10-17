#include <stdio.h>
int main()
{
int r=3,i,j;
int c=3;
int array[10][10];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("ENTER THE ELEMENTS");
scanf("%d",&array[i][j]);
}
}
printf("\nUPPER TRIANGULAR MATRIX");
printf("\n");

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(i>j)
printf("");
else
printf("\t%d",array[i][j]);

}
printf("\n");
}


printf("\nLOWER TRIANGULAR MATRIX");
printf("\n");

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(i<j)
printf("");
else
printf("\t%d",array[i][j]);

}
printf("\n");
}




for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("\nENTER THE ELEMENTS");
scanf("%d",&array[i][j]);
}
}
printf("\nUPPER TRIANGULAR MATRIX");
printf("\n");

for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
if(i>j)
printf("");
else
printf("\t%d",array[i][j]);

}
printf("\n");
}


printf("\nLOWER TRIANGULAR MATRIX");
printf("\n");

for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
if(i<j)
printf("");
else
printf("\t%d",array[i][j]);

}
printf("\n");
}


return 0;
}
