#include <stdio.h>  
#include <stdlib.h>  
struct node   
{  
int data;  
struct node *next;  
};
struct node *top = NULL;  
void push()  
{ 
    struct node *New = (struct node*)malloc(sizeof(struct node)); 
	printf("Enter the value: ");
    scanf("%d",&New->data);  
    New -> next = NULL;    
    if(New == NULL)  
    {  
        printf("out of space");   
    }  
    else   
    {  
        if(top==NULL)  
        {         
            top=New;  
        }   
        else   
        { 
            New->next = top;  
            top=New;   
        }  
        printf("Item pushed\n"); 
    }  
}  
void pop()  
{    
    struct node *p;  
    if (top == NULL)  
    {  
        printf("Underflow");  
    }  
    else  
    {  
        p = top;
		printf("%d is popped",p->data);  
        top = top->next;
		p->next=NULL;  
        free(p);    
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
		printf("3.To exit\n");
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
				exit(0);
				break;
			default:
				printf("\n Wrong Choice");
            break;
		}
	}
}
