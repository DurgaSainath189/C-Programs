#include<stdio.h>
int main()
{
    int i,j;
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for (i=n;i>0;i--)
    {
        for (j=i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
