#include<stdio.h>
 int main()
{
   int n;//declare a variable
   printf("Enter an integer\n");
   scanf("%d",&n);//read the value of n form user
   if ( n & 1 == 1 )//check the condition
      printf("Odd\n");//if true prints odd
   else
      printf("Even\n");//if false printd even
    return 0;
}
