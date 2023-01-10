#include<stdio.h> 
int main()
{
    int a, b,result;
    printf("Enter any two numbers:\n");
    scanf("%d%d", &a, &b);
    result = (a>b)?a:b;
	while(1)
	{
		if(result%a == 0 && result%b == 0)
		{
        printf("LCM of %d and %d is: %d\n",a,b,result);
        break;
        }
    result++;
    }
    return 0;
}
