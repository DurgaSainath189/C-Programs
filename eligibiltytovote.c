/*Eligible to vote or not*/
#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age of the person:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("person is eligible to vote\n");
    }
    else
    {
        printf("person is not eligible to vote");
    }
    return 0;
}
