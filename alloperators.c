/*all operations*/
#include<stdio.h>
int main()
{
    int a,b,sum,diff,pro,moddiv;
    float div;
    printf("enter any two numbers\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum of numbers is %d \n",sum);
    diff=a-b;
    printf("diff of numbers is %d \n",diff);
    pro=a*b;
    printf("pro of numbers is %d \n",pro);
    div=(float)a/b;
    printf("div of numbers is %.1f \n",div);
    moddiv=a%b;
    printf("moddiv of numbers is %d \n",moddiv);
}
