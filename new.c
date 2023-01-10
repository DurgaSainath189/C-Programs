#include<stdio.h>
int main()
{
    int n,i,res;//declaring the varaibles
    printf("Enter value of n:\n");
    scanf("%d",&n);//reading the value of n
   for (i = 31; i >= 0; i--)//using for loop
    {
    res = n >> i;//checking the condition
    if (res & 1)
    printf("1");// prints 1 if condition is true
    else
    printf("0");//prints 2 if condition is false
    }
    printf("\n");
    return 0;
}
