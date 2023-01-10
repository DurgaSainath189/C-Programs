#include<stdio.h>
#include<math.h>
int main()
{
	char str1[100];
	float height,weight,BMI;
	printf("Enter the name of the person:\n");
	scanf("%s",str1);//enter the name of the person
	printf("Enter the height in cm:\n");
	scanf("%f",&height);//enter height of the person
	printf("Enter the weight in kg:\n");
	scanf("%f",&weight);//enter the weight of the person
	puts(str1);//putting the name of the person
	BMI=(float)weight/(height*height/10000);//calculating BMI
	if(BMI>=25.0)//checking the given conditions
	printf("is OVERWEIGHT as height is %.2fcm, weight is %.1fkg and BMI is:%.2f",height,weight,BMI);
	if(BMI>=18.5&&BMI<=24.9)
	printf("is HEALTHY as height is %.2fcm, weight is %.1fkg and BMI is:%.2f",height,weight,BMI);
	if(BMI<=18.4)
	printf("is UNDERWEIGHT as height is %.2fcm, weight is %.1fkg and BMI is:%.2f",height,weight,BMI);
	return 0;
}
