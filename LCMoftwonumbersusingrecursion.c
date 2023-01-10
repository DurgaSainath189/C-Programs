#include<stdio.h>
int LCM(int, int); 
int main()
{
    int a, b,result;
    printf("Enter any two numbers:\n");
    scanf("%d%d", &a, &b);
    result = LCM(a,b);   
    printf("LCM of %d and %d is: %d\n",a,b,result);
    return 0;
}

int LCM(int a, int b)
{
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
        temp++;
        LCM(a,b);
        return temp;
}
