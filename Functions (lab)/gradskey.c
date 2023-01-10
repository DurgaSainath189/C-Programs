//Roll no:AP21110011295
//Age:19
#include<stdio.h>
int top = -1;
void push_stack(int);
void pop_stack(int);
int  add_op(int);
int stack[30];
int add=0,age=19;
int main()
{
	int sum;
	push_stack(2);
	push_stack(1);
	push_stack(1);
	push_stack(1);
	push_stack(0);
	push_stack(0);
	push_stack(1);
	push_stack(1);
	push_stack(2);
	push_stack(9);
	push_stack(5);
	//Since second from beginning
	pop_stack(5);
	pop_stack(9);
	pop_stack(2);
	pop_stack(1);
	pop_stack(1);
	pop_stack(0);
	pop_stack(0);
	pop_stack(1);
	pop_stack(1);
	sum = (add)*age;
	printf("%d\n",sum);
}
void push_stack(int data)
{
	if(top==-1)
	{
		top = 0;
		stack[top] = data;
	}
	else
		top = top+1;
	stack[top] = data;
}
void pop_stack(int data)
{
	add_op(data);
	top = top-1;
}
int add_op(int value)
{
	add = add+(value);
	return add;
	
}
