/*greatest of three using ternary*/
#include<stdio.h>
int main()
{
    int a,b,c,big;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    big=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("greatest number is :%d",big);
    return 0;
}
