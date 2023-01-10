#include<stdio.h>
int areaofsquare();
int main()
{
	int area;
	area=areaofsquare();
	printf("The area of square is:%d",area);
	return 0;
}
int areaofsquare()
{
	int s,area;
	printf("Enter the value of s:");
	scanf("%d",&s);
	area=s*s;
	return area;
}
