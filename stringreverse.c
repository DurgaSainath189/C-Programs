/*Reversal of a string*/
#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char str[40];  
    printf ("Enter a string to be reversed: ");  
    scanf ("%s",&str);   
    printf (" \n After the reverse of a string: %s ", strrev(str));  
    return 0;  
}  

