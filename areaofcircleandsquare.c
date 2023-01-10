/*area of circle and square*/
#include<stdio.h>
#define pi 3.14
int main()
{
    int r,s,a;
    float c;
    printf("Enter the value of r:");
    scanf("%d",&r);
    printf("Enter the value of a:");
    scanf("%d",&a);
    s=a*a;
    c=(float)pi*r*r;
    printf("Area of circle is %.2f\n",c);
    printf("Area of square is %d",s);
    return 0;
}
