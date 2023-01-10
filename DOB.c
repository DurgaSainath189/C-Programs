#include<stdio.h>
int DOB(int,int,int);
int main()
{
    int date,year,month;
    printf("Enter the date:");//enter your date
    scanf("%d",&date);
    printf("Enter the month:");//enter your month
    scanf("%d",&month);
    printf("Enter the year:");//enter your year
    scanf("%d",&year);
    DOB(date,month,year);//calling the function
}
int DOB(int date,int month,int year)//called function
{
    int sum1 = 0,sum2=0;//initialing sum1,sum2 to 0
    while(date!=0)//checking if date not equal to 0
    {
        sum1= sum1 + date%10;
        date = date/10;
    }
    while(month!=0)//checking if month not equal to 0
    {
        sum1 = sum1 + month%10;
        month= month/10;
    }
    while(year!=0)//checking if year not equal to 0
    {
        sum1 = sum1 + year%10;
        year = year/10;
    }
    if(sum1<10)
    {
        printf("%d\n",sum2);   
    }
    else
    {
        while(sum1!=0)
        {
            sum2 = sum2 + sum1%10;
            sum1 = sum1/10;
        }
        printf("The sum of number of your DOB is:%d\n",sum2);
    }
}
