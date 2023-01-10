/*area of circle*/
#include<stdio.h>
#define pi 3.14
int main()
{
    int r;
    float area;
    printf("enter any number");
    scanf("%d",&r);
    area=(float)pi*r*r;
    printf("area of circle is %.2f",area);
    return 0;
}
