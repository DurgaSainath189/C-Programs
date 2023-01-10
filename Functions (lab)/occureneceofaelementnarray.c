#include<stdio.h>
void occurence(int[],int);
int main()
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	occurence(a,n);
}
void occurence(int b[],int n)
{
	int key,count=0;
	printf("Enter the key to check its occurence:");
	scanf("%d",&key);
	for(int i=0;i<n;i++)
	{
		if(b[i] == key)
			count++;
		else
			continue;
	}
	printf("The %d number occured in %d times\n",key,count);
}
