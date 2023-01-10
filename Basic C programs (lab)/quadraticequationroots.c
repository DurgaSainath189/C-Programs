#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,D;
	float root1,root2,x,y;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	printf("Enter value of c:");
	scanf("%d",&c);
	D=(b*b)-(4*a*c);
	if(D>0)
	{
		printf("Roots are real and distinct\n");
		root1=(-b+sqrt(D))/2*a;
		root2=(-b-sqrt(D))/2*a;
		printf("Roots are %.1f and %.1f\n",root1,root2);
	}
	else if(D==0)
	{
		printf("Roots are equal\n");
		root1=root2=(-b/2*a);
		printf("Roots are %.1f and %.1f\n",root1,root2);
	}
	else
	{
		printf("Roots are imaginary\n");
		x=(-b/2*a);
		y=sqrt(-D)/2*a;
		printf("Root1=%.2f+i(%.2f)\n",x,y);
		printf("Root2=%.2f-i(%.2f)",x,y);
	}
	return 0;}

