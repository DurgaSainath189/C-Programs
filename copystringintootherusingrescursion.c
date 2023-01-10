#include <stdio.h>
void copyString(char [], char [], int);
int main()
{
    char str1[20],str2[20];
    printf("Enter the string to copy: ");
    scanf(" %s",str1);
    copyString(str1,str2,0);
    printf(" The Entered string is: %s\n",str1);
    printf(" The copied string is : %s",str2);
    return 0;
}
void copyString(char str1[],char str2[], int n)
{
    str2[n]=str1[n];
    if(str1[n]=='\0')
    return;
	copyString(str1,str2,n+1);
}
