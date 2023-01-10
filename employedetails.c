#include<stdio.h>
struct employee{
	    int Id;
		char name[25];
		float salary;
	}e1,e2;
	int main()
	{
		printf("Enter the 1st employee id:\n");
		scanf("%d",&e1.Id);
		printf("Enter the 1st employee name:\n");
	    scanf(" %[^\n]s",e1.name);
		printf("Enter the 1st employee salary:\n");
		scanf("%f",&e1.salary);
		printf("Enter the 2nd employee id:\n");
	    scanf("%d",&e2.Id);
		printf("Enter the 2nd employee name:\n");
		scanf(" %[^\n]s",e2.name);
		printf("Enter the 2nd employee salary");
		scanf("%f",&e2.salary);
	printf("Id=%d",e1.Id);
	printf("name=%s",e1.name);
	printf("salary=%f",e1.salary);
	printf("Id=%d",e2.Id);
	printf("name=%s",e2.name);
	printf("salary=%f",e2.salary);
	
	return 0;
}
