#include<stdio.h>
int main()
{
int n,digit = 0;
printf("Enter any number:");
scanf("%d",&n);
do{
    digit = n% 10;           
    if (digit % 2 != 0)         
        printf("%d\n", digit);  
    n/= 10;                  
} while (n > 0); 
}
