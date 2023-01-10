#include<stdio.h>
int add(int,int);
int diff(int,int);
int pro(int,int);
float div(int,int);
int moddiv(int,int);
int main()
{
    int a,b,sum,diffe,prod,moddivi;
    float divi;
    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    diffe=diff(a,b);
    prod=pro(a,b);
    divi=(float)div(a,b);
    moddivi=moddiv(a,b);
    printf("The sum is:%d\n",sum);
    printf("The diff is:%d\n",diffe);
    printf("The pro is:%d\n",prod);
    printf("The div is:%.2f\n",divi);
    printf("The moddiv is:%d\n",moddivi);
}
int add(int x,int y)
{
return x+y;
}
int diff(int x,int y)
{
return x-y;
}
int pro(int x,int y)
{
return x*y;
}
float div(int x,int y)
{
return (float)x/y;
}
int moddiv(int x,int y)
{
return x%y;
}

