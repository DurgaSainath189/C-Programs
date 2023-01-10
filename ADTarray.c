#include<stdio.h>
#include<stdlib.h>
void insert(int a[],int key,int index,int size)
{
for(int i=size-1;i>=index;i--)
 a[i+1]=a[i];
 a[index]=key;
 printf("array after insering element:\n");
 for(int i=0;i<size;i++)
    printf("%d ",a[i]);
}
void deletion(int a[],int index,int size)
{
  for(int i=index;i<=size-1;i++)
  a[i]=a[i+1];
  printf("array after deleting element:\n");
  for(int i=0;i<size;i++)
    printf("%d ",a[i]);
}
int search(int a[],int key,int size)
{
 for(int i=0;i<size;i++)
 if(a[i]==key)
 {
  printf("key is found at index %d\n",i);
  return 0;
 }
 printf("key not found\n");
}
void traverse(int a[], int size)
{
 for (int i=0;i<size;i++)
 printf("%d ", a[i]);
}
void update(int a[], int key, int index)
{
 a[index] = key;
}
int main()
{
 int a[100];
 int index, key;
 int size, choice;
 printf("Enter the array size:\n");
 scanf("%d", &size);
 printf("Enter %d elements:\n", size);
 for(int i=0;i<size;i++)
 scanf("%d", &a[i]);
 while(1)
 {
 printf("\nPress \t1:Insertion\n\t2:Deletion\n\t3:Searching\n\t4:Traversal\n\t5:Update\n\t6:Exit\n");
 printf("Enter your choice:\n");
 scanf("%d", &choice);
 switch(choice)
 {
 case 1:
 printf("Enter the element to insert and index where to insert\n");
 scanf("%d %d",&key,&index);
 insert(a, key, index, size);
 printf("\nElement inserted\n");
 break; //optional
 case 2:
 printf("Enter the index of the element to delete\n");
 scanf("%d", &index);
 deletion(a, index, size);
 printf("\nelement deleted\n");
 break;
 case 3:
 printf("Enter the key to search\n");
 scanf("%d", &key);
 search(a, key, size);
 break;
 case 4:
 traverse(a, size);
 break;
 case 5:
 printf("Enter the key and index\n");
 scanf("%d%d", &key, &index);
 update(a, key, index);
 break;
 case 6: exit(1);
 break;
default:
printf("invalid choice");
}
}
}
