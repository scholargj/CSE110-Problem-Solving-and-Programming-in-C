#include <stdio.h>
    #include <stdlib.h>

    int main()
    {
       char ch, file1[20], file2[20];
       FILE *f1, *f2;
      char c; 
     f1= fopen("Text.txt","w");
     fputs("C PROGRAMMING FOR BEGINNERS", f1);
      fclose(f1);
       printf("ENTER THE FILE TO COPY THE TEXT\n");
       gets(file1);

       f1 = fopen(file1, "r");

       if( f1 == NULL )
       {
          exit(0);
       }

       printf("ENTER THE SECOND FILE TO COPY\n");
       gets(file2);
       f2 = fopen(file2, "w");

       if( f2 == NULL )
       {
          fclose(f1);
          exit(0);
       }

       while( ( ch = fgetc(f1) ) != EOF )
          fputc(ch, f2);

       printf("File copied successfully.\n");

       fclose(f1);
       fclose(f2);
       return 0;
    }


