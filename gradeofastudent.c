/*Grade of a Student*/
#include<stdio.h>
#include<math.h>
int main()
{   int a,b,c,d,e,f;
	float avg;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	printf("Enter the value of d:");
	scanf("%d",&d);
	printf("Enter the value of e:");
	scanf("%d",&e);
	printf("Enter the value of f:");
	scanf("%d",&f);
	avg=(float)(a+b+c+d+e+f)/6;
	if(avg<0||avg>100)
	printf("invalid marks");
	else if(avg>=91&&avg<=100)
	printf("%f is the avg and grade of student is:A+",avg);
	else if(avg>=71&&avg<=90)
	printf("%f is the avg and grade of student is:A",avg);
	else if(avg>=61&&avg<=70)
	printf("%f is the avg and  grade of student is:B+",avg);	
    else if(avg>=51&&avg<=60)
	printf("%f is the avg and  grade of student is:B",avg);
	else if(avg>=40&&avg<=50)
	printf("%f is the avg and grade of student is:C",avg);
	else
	printf("%f is the avg and grade of student is:FAIL",avg);
	return 0;
}

