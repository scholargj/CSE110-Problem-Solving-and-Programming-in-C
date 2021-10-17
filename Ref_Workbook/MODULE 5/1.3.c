#include <stdio.h>
int main()
{
    FILE *fpr;
    char str[100];
    char str1[100];
    fpr = fopen("file.txt", "r+");
    if (fpr == NULL)
    {
       puts("ERROR IN OPENING FILE");
    }
    printf("\nEXISTING WORDS IN FILE:");
    while(1)
    {
       if(fgets(str, 10, fpr) ==NULL)
            break;
       else
            printf("%s", str);
    }
    printf("\n\nENTER THE STRING:");
    gets(str1);
    fprintf(fpr,"%s",str1);
    printf("\nWORDS UPDATED SUCCESSFULLY");
    fclose(fpr);
    return 0;
}

