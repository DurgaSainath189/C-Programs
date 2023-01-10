/*Comparing two strings*/
#include<stdio.h>
int main() 
{
   char str1[30], str2[30];
   int i;
   printf("Enter string 1:");
   gets(str1);
   printf("Enter string 2:");
   gets(str2);
   while (str1[i] == str2[i] && str1[i] != '\0')
      i++;
   if (str1[i] > str2[i])
      printf("str1 > str2");
   else if (str1[i] < str2[i])
      printf("str1 < str2");
   else
      printf("str1 = str2");
 
   return (0);
}
