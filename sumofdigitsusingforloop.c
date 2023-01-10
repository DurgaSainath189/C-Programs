#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=0;n>0;n=n/10)
        i = i + (n%10);
    printf("The Sum of digits is: %d",i);
    return 0;
}
