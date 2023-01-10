#include<stdio.h>
int main()
{
    int n;
    float sum=0.0,i;
    printf("Enter the range of number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=(1/i);
        printf("1/%d\n",i);
    }
    printf("The sum of the series = %0.2f",sum);
}
