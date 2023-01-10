#include<stdio.h>
int squareofnumber(int);
int cubeofnumber(int);
int main()
{
	int n,square,cube;
	printf("Enter the value of n:");
	scanf("%d",&n);
	square=squareofnumber(n);
	printf("The square of %d is:%d\n",n,square);
    cube=cubeofnumber(n);
	printf("The cube of %d is:%d\n",n,cube);
}
int squareofnumber(int x)
{
	return x*x;
}
int cubeofnumber(int x)
{
	return x*x*x;
}
