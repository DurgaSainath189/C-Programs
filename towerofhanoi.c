#include<stdio.h> 
void TOH(int, char, char, char);
int main()
    { 
        int n;
        printf("Enter the number of disks : ");  
        scanf("%d", &n); 
        printf("The sequence of moves involved in the Tower of Hanoi are :\n");   
        TOH(n, 'A', 'B', 'C'); 
        return 0;
    }
void TOH(int n, char A, char  B, char  C)
{
    if(n==1) 
    {
        printf("\n Move disk 1 from  %c to  %c", A,C); 
        return; 
    }
 TOH(n - 1, A, C, B);
 printf("\n Move disk %d from  %c to  %c", n, A, C);
 TOH(n - 1, B, A, C);
}

