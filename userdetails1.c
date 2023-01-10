#include<stdio.h>
struct user_details{
	char name[50];
	char city[50];
	char email[50];
	long int mobileno;
}u1,u2;
int main()
{
printf("Enter the name of 1st user:\n");
scanf(" %[^\n]s",u1.name);
printf("Enter the city of 1st user:\n");
scanf(" %[^\n]s",u1.city);
printf("Enter the email of 1st user:\n");
scanf(" %[^\n]s",u1.email);
printf("Enter the mobile no of 1st user:\n");
scanf(" %lf",&u1.mobileno);
printf("Enter the name of 2nd user:\n");
scanf(" %[^\n]s",u2.name);
printf("Enter the city of 2nd user:\n");
scanf(" %[^\n]s",u2.city);
printf("Enter the email of 2nd user:\n");
scanf(" %[^\n]s",u2.email);
printf("Enter the mobile no of 2nd user:\n");
scanf(" %lf",&u2.mobileno);
if(u1.mobileno==u2.mobileno)
{
printf("The given mobile number already exists\n");
printf("Pls enter correct details\n");
printf("Enter the name of 2nd user:\n");
scanf(" %[^\n]s",u2.name);
printf("Enter the city of 2nd user:\n");
scanf(" %[^\n]s",u2.city);
printf("Enter the email of 2nd user:\n");
scanf(" %[^\n]s",u2.email);
printf("Enter the mobile no of 2nd user:\n");
scanf(" %lf",&u2.mobileno);
}
return 0;
}



