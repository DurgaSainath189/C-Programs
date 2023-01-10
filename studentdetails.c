#include<stdio.h>
#include<string.h>
struct student{
	    int id;
		char name[25];
		float fees;
		int marks;
	}s1,s2,s3;
	int main()
	{
	printf("Enter the 1st student id:\n");
	scanf("%d",&s1.id);
	printf("Enter the 1st student name:\n");
    scanf(" %[^\n]s",s1.name);
	printf("Enter the 1st student fees:\n");
	scanf("%f",&s1.fees);
	printf("Enter the marks of 1st student:\n");
	scanf("%d",&s1.marks);
	printf("Enter the 2nd student id:\n");
    scanf("%d",&s2.id);
	printf("Enter the 2nd student name:\n");
	scanf(" %[^\n]s",s2.name);
	printf("Enter the 2nd student fees:\n");
	scanf("%f",&s2.fees);
	printf("Enter the marks of 2nd student:\n");
	scanf("%d",&s2.marks);
	printf("Enter the 3rd student id:\n");
    scanf("%d",&s3.id);
	printf("Enter the 3rd student name:\n");
    scanf(" %[^\n]s",s3.name);
	printf("Enter the 3rd student fees:\n");
	scanf("%f",&s3.fees);
	printf("Enter the marks of 3rd student:\n");
	scanf("%d",&s3.marks);
	printf("\t\t\t\t******STUDENT DETAILS******\n\n");
	printf("Deatils of student 1\t\tDeatils of student 2\t\tDeatils of student 3\n");
	printf("Id=%d\t\t\t\tId=%d\t\t\t\tId=%d\t\t\t\t\n",s1.id,s2.id,s3.id);
	printf("Name=%s\t\t\tName=%s\t\t\tName=%s\t\t\t\n",s1.name,s2.name,s3.name);
	printf("Fees=%f\t\tFees=%f\t\tFees=%f\t\t\n",s1.fees,s2.fees,s3.fees);
	printf("Marks=%d\t\t\tMarks=%d\t\t\tMarks=%d\t\t\t\n",s1.marks,s2.marks,s3.marks);
	return 0;
}
