#include<stdio.h>
#include<stdlib.h>
# define size 25
int stack[size];
int top=-1;
void push()
{
	int value;
	if(top==size-1)
	{
		printf("stack is full");
	}
	else
	{
		printf("Enter the push:\n");
		scanf("%d",&value);
		top+=1;
		stack[top]=value;
	}
}
void pop()
{
	if(top==-1)
	printf("stack is empty");
	else
	{
		printf("%d is the deleted element",stack[top]);
		top-=1;
	}
}
void traverse()
{
	int i;
	if(top==-1)
    printf("stack is empty");
    else
    {
    for(i=top;i>=0;i--)
	printf("%d\n",stack[i]);	
	}
}
void peak()
{
    if(top==-1)
    printf("stack is empty");
    else
    {
	printf("%d",stack[top]);	
	}	
}
int main()
{
	int choice;
	while(1)
	 	{
		printf("\n************MENU**********\n");
		printf("1.To push up the element\n");
		printf("2.To pop up the element\n");
		printf("3.To traverse the element\n");
		printf("4.To find the peak element\n");
		printf("5.To exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				traverse();
				break;
			case 4:
				peak();
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("\n Wrong Choice");
            break;
        }
	}
}
