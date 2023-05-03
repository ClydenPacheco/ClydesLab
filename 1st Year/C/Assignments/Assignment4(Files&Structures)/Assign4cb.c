#include<stdio.h>
void main()
{
     char outfile[50],infile[50];
     FILE *ptr=NULL;
     ptr=fopen("CP.txt","w");
     printf("Enter a string:\n");
     gets(outfile);
     fprintf(ptr,"%s",outfile);
     fclose(ptr);
     ptr=fopen("CP.txt","r");
     fgets(infile,50,ptr);
     printf("The string in the .txt file is:\n");
     puts(infile);
     fclose(ptr);
}