/*swapping two numbers using temp varaiable*/
#include<stdio.h>
int main()
{
int  a, b, temp;
printf("Enter the values of a and b\n");
scanf("%d%d",&a,&b);
printf("Before swapping \na = %d\t b= %d\n",a,b);
temp = a;
a = b;
b = temp;
printf("After swapping \na = %d\t b = %d\n",a,b);
return 0;
}
