#include <stdio.h>
int main()
{
   int A[10][10],B[10][10],C[10][10],i,j,r1,c1,r2,c2,k;   
    printf("Enter order Of A\n"); 
   scanf("%d  %d",&r1,&c1);
    printf("Enter order Of B\n"); 
   scanf("%d  %d",&r2,&c2);
     if( c1!=r2)  
         {     
                   printf("Multiplication is not possible\n"); 
           }
else  
  {        
printf("Enter the matrix A elements\n");        
for(i=0;i<r1;i++)      
      for(j=0;j<c1;j++)    
            scanf("%d",&A[i][j]);                         
			 printf("Enter the matrix B elements\n");           
			  for(i=0;i<r2;i++)     
       for(j=0;j<c2;j++) 
             scanf("%d",&B[i][j]); 
             for(i=0;i<r1;i++)  
{   
     for(j=0;j<c2;j++)     
            {
          C[i][j]=0;
           for(k=0;k<c1;k++)
           C[i][j]+=A[i][k]*B[k][j];
        }
}
for(i=0;i<r1;i++)    
             {          
               for(j=0;j<c2;j++)            
                  printf("%d  ",C[i][j]); 
                 printf("\n");      
              }             
              }   
 return 0;
}
       

