#include<stdio.h>
#include<conio.h>
#include<process.h>

void read(); 
void write();

struct record
{
  char name[30];
  int id;
  float sal;
  float gs,hra,da;
}s;

int main()
{
int ch;

    while(1)
    {
        printf("\n1:Write Records");
        printf("\n2:Read Records");
        printf("\n3:Exit");
        printf("\n\tEnter Your Choice:- ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            write();
            break;
            case 2:
            read();
            break;
            case 3:
            exit(1);
            default:
            printf("\n\tOption not Available\n");
            break;
        }
    }
return 0;
}

void write()
{
int i,n=0;
FILE *fp;
    fp=fopen("emppay.dat","wb");
    if(fp==NULL)
    {
        printf("can't create file");
        getch();
        exit(1);
    }
    printf("\n\tHow Many Records You Want to Enter:=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter Employee ID := ");
        scanf("%d",&s.id);
        printf("\nEnter Employee Name := ");
        scanf("%s",s.name);
        printf("\nEnter the Salary:=");
        scanf("%f",&s.sal);
        s.hra=(s.sal/100)*25;
        printf("\nHRA:%.2f",s.hra);
        s.da=(s.sal/100)*30;
        printf("\nDA:%.2f",s.da);
        s.gs=s.sal+s.sal+s.sal;
        printf("\nGROSS SALARY:%.2f",s.gs);
        printf("\n*****************\n");
        fwrite(&s,sizeof(s),1,fp);
    }
fclose(fp);
}

void read()
{
FILE *fp;
    fp=fopen("emppay.dat","rb");
    if(fp==NULL)
    {
        printf("can't read file");
        getch();
        exit(1);
    }
        while(fread(&s,sizeof(s),1,fp)==1)
        {
            printf("\nEmployee ID := %d",s.id);
            printf("\nEmployee Name := %s",s.name);
            printf("\nSalary:= %f",s.sal);
            printf("\nHRA:%.2f",s.hra);
            printf("\nDA:%.2f",s.da);
            printf("\nGROSS SALARY:%.2f",s.gs);
            printf("\n********************\n");
        }
fclose(fp);
}

