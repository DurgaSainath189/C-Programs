/*Palindrome or not*/
#include <stdio.h>
int main()
{
    char str[25], reverse_str[25];
    int i, length = 0, flag = 0;
    printf("Enter a string:");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    for (i = length - 1; i >= 0 ; i--)
    {
        reverse_str[length - i - 1] = str[i];
    }
    for (flag = 1, i = 0; i < length ; i++)
    {
        if (reverse_str[i] != str[i])
            flag = 0;
    }
    if (flag == 1)
       printf ("%s is a palindrome \n", str);
    else
       printf("%s is not a palindrome \n", str);
}
