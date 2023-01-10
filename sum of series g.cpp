#include<stdio.h>
int main()
{
    int n,i,fact=1;
    float sum=0.0;
    printf("Enter the range of number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
    fact*=i;
     sum+=1/(float)fact;
    }

    printf("The sum of the series = %0.2f",sum);
}

