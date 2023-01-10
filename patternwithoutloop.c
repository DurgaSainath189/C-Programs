#include <stdio.h>
void NextValue(int m)
{
	if (m > 0)
   {
   	printf("%d\t",m);
    NextValue(m - 5);
   }
   printf("%d\t",m);
}
int main()
{
   int n;
   printf("Enter the value of n:");
   scanf("%d",&n);
   printf("The pattern is:\n");
   NextValue(n);
   return 0;
}
