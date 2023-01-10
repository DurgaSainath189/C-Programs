/*Linear search*/
#include<stdio.h>
#define MAX_SIZE 5
void linear_search(int[], int); 
int main()
{ 
int arr[MAX_SIZE], i, element;
printf("Enter %d Elements:\n", MAX_SIZE);
for (i = 0; i < MAX_SIZE; i++)
scanf("%d", &arr[i]);
printf("Enter Element to Search : ");
scanf("%d", &element); 
linear_search(arr, element); 
return 0;
}
void linear_search(int  a[], int element)
{
int i; 
for (i = 0; i < MAX_SIZE; i++)
{ 
    if(a[i]==element) 
    {
    printf("Linear Search : %d is Found at : %d.\n", element, i + 1);
    break; 
    }
    if(i==MAX_SIZE) 
    printf("\nSearch Element : %d : Not Found \n", element);
}
}

