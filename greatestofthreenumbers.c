/*Greatest of three numbers*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    if(a>b&&a>c)
        printf("A is greatest number");
    else if(b>c)
        printf("B is greatest number");
    else
        printf("C is greatest number");
    return 0;

}
