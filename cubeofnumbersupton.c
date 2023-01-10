#include <stdio.h>
int main()
 {
    int i,n;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
	 printf("Cube of the %d is :%d \n",i, (i*i*i));     
    }
    return 0;
 }
