#include<stdio.h>
float areaofcircle();
int main()
{
	float area;
	area=areaofcircle();
	printf("The area of circle is:%.2f",area);
	return 0;
}
float areaofcircle() 
{
	float r,area;
	printf("Enter the value of r:");
	scanf("%f",&r);
	area=3.14*r*r;
	return area;
}

