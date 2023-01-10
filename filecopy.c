/*Copying a file*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fp1, *fp2;
   char ch;
   fp1=fopen("C:/Users/Durga Sainath/FILES/c.txt","r");
   //c.txt contains Hello Welcome to SRM University
   if(fp1==NULL)
   {
    printf("Cant open\n");
    exit(0);
   }
   fp2=fopen("C:/Users/Durga Sainath/FILES/d.txt","w");
   if(fp2==NULL)
   {
    printf("Cant open\n");
    exit(0);
   }
   ch= fgetc(fp1);
   while(ch!=EOF)
   {
    fputc(ch,fp2);
    ch= fgetc(fp1);
   }
   fclose(fp1);
   fclose(fp2);
   return 0;
}

