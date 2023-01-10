/*bitwise operators*/
#include<stdio.h>
int main()
{
    int x,y,a,b,c,d,e,f;
    printf("Enter values of x,y\n");
    scanf("%d%d",&x,&y);
    a=x&y;
    printf("Bitwise AND is %d\n",a);
    b=x|y;
    printf("Bitwise OR is %d\n",b);
    c=x^y;
    printf("Bitwise exclusive OR is %d\n",c);
    d=~y;
    printf("One's Compliment is %d\n",d);
    e=x<<1;
    printf("Bitwise left Shift is %d\n",e);
    f=y>>1;
    printf("Bitwise Right Shift is %d",f);
    return 0;
}
