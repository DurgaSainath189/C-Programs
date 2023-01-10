#include<stdio.h>
#include<stdlib.h>
struct student{
	char name[50];
	int rollno;
	int marks;
}s1,s2,s3;
int main()
{
	printf("Enter name:");
	scanf(" %[^\n]s",&s1.name);
	printf("Enter roll number:");
	scanf("%d",&s1.rollno);
	printf("Enter marks:");
	scanf("%d",&s1.marks);
	printf("Enter name:");
	scanf(" %[^\n]s",s2.name);
	printf("Enter roll number:");
	scanf("%d",&s2.rollno);
	printf("Enter marks:");
	scanf("%d",&s2.marks);
	printf("Enter name:");
	scanf(" %[^\n]s",s3.name);
	printf("Enter roll number:");
	scanf("%d",&s3.rollno);
	printf("Enter marks:");
	scanf("%d",&s3.marks);
	if(marks>90 && marks<=100)
	{
	  printf("A");
    }
    else if(marks>80&&marks<=90)
	{
	printf("B");
    }
    else if(marks>70&&marks<=80)
	{
	printf("C");
    }
    else if(marks>60&&marks<=70)
	{
	printf("D");
    }
    else if(marks>50&&marks<=60)
	{
	printf("E");
    }
}
