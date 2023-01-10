#include <stdio.h>
void stud(struct student);
struct student{
    char Name[50];
    int roll;
}s1;
int main()
{
printf("Enter the name of 1st student\n");
scanf("%s",s1.Name);
printf("Enter the Roll Number of 1st student\n");
scanf("%d",&s1.roll);
stud(s1);
return 0;
}
void stud(struct student m){
    printf("The Name of student is %s\n",m.Name);
    printf("The Roll No of student is %d\n",m.roll);
}
