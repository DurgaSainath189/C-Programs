#include <stdio.h>    
int main()    
{      
    int A[]={1, 2, 3, 4, 5};  
    int length = sizeof(A)/sizeof(A[0]);       
    int B[length];      
    for (int i = 0; i < length; i++) 
    {     
        B[i] = A[i];     
    }             
    printf("Elements of original array: \n");    
    for (int i = 0; i < length; i++) 
	{     
        printf("%d ", A[i]);    
    }          
    printf("\nElements of new array: \n");    
    for (int i = 0; i < length; i++) 
	{     
        printf("%d ", B[i]);    
    }    
    return 0;
}    

