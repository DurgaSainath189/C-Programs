#include<stdio.h>
int main()
{
    int n,sum=0,i=1;
    printf("Enter the range of number:");
    scanf("%d",&n);

    while(i<=n)
    {
        sum+=i;
        i+=2;
        printf("%d\n",i);
    }
    printf("The sum of the series = %d",sum);
}
