#include<stdio.h>
struct complex_number{
	float real;
	float imaginary;
};
int main()
{
	struct complex_number c1,c2,diff;
	printf("Enter the real and imaginary parts of first complex numbers:\n");
	scanf("%f%f",&c1.real,&c1.imaginary);
	printf("Enter the real and imaginary parts of second complex numbers:\n");
	scanf("%f%f",&c2.real,&c2.imaginary);
	diff.real=c1.real-c2.real;
	diff.imaginary=c1.imaginary-c2.imaginary;
	printf("complex_number c1 = %.1f+i%.1f\n",c1.real,c1.imaginary);
	printf("complex_number c2 = %.1f+i%.1f\n",c2.real,c2.imaginary);
	printf("DIFF=%.1f+i%.1f",diff.real,diff.imaginary);
	return 0;
}
