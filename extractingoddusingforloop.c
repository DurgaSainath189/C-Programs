#include<stdio.h>
int main()
{
int n,digit = 0,i;
printf("Enter any number:");
scanf("%d",&n);
for(i=0;n>0;n/=10)
{
    digit = n% 10;           
    if (digit % 2 != 0)         
    printf("%d\n", digit);                    
}
}
