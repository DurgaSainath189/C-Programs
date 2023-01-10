/*perimeter of rectangle*/
#include<stdio.h>
int main()
{
    int l,b,perimeter;
    printf("enter any two numbers");
    scanf("%d%d",&l,&b);
    perimeter=2*(l+b);
    printf("perimeter of rectangle is %d",perimeter);
    return 0;
}
