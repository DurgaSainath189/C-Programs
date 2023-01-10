/*Call by value*/
#include<stdio.h>
void swap(int,int);
int main()
{
	int a=10,b=20;
	printf("Before swap values in main a=%d,b=%d\n",a,b);
	swap(a,b);
	printf("After swap values in main a=%d,b=%d\n",a,b);
	return 0;
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("After swap values in function a=%d,b=%d\n",a,b);
}

