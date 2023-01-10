#include<stdio.h>
int main()
{
    int n,i;
	long int fact=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    i=n;
    do{
    	fact=fact*i;
        i--;
	}
    while(i>=1);
    printf("%d! is:%ld\n",n,fact);
    return 0;
}
