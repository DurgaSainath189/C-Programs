/*area of triangle*/
#include<stdio.h>
int main()
{
    int b,h;
    float area;
    printf("enter any two numbers");
    scanf("%d%d",&b,&h);
    area=(float)(b*h)/2;
    printf("area of triangle is %.2f",area);
    return 0;
}
