/*area of traingle*/
#include<stdio.h>
int main()
{
    int b,h;
    float area;
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of h: ");
    scanf("%d",&h);
    area=(float)(b*h)/2;
    printf("area of triangle is %.1f",area);
    return 0;
}
