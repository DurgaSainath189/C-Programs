#include <stdio.h>
int main()
{    
   int A[5],key,i;
   printf("Enter 5 elements:\n");  
   for(i = 0; i < 5; i++)   
   {     
   scanf("%d", &A[i]); 
   }  
   printf("The 5 elements are:\n"); 
   for(i = 0; i < 5; i++)  
   {       
   printf("%d\n", A[i]);
   }
   printf("enter the key element\n");
   scanf("%d", &key);
   for(i = 0; i < 5; i++)  
   {     
   if(A[i] == key) 
   { 
   printf("key found at %d\n", i);
   return 0;
   }
   }
   printf("key not found");
}

