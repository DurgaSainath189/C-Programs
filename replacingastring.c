/*Replacing a string at beggining,ending or at specific position*/
#include<stdio.h>
#include<string.h>
void replace_front(char[],char,char);
void replace_end(char str[],char ch,char rp);
void replace_at_pos(char[],char,int);
int i;
int main()
{
	char str[200],ch,rp,ch1='y';
	int pos,op;
	printf("1.Replace character in the beggining\n");
	printf("2.Replace character at the ending\n");
	printf("3.Replace character at specified position\n");
	while(ch1=='y')
	{
		printf("Enter your option:\n");
		scanf("%d",&op);
		printf("Enter the String:\n");
		scanf(" %[^\n]s",str);
		
		switch(op)
		{
			case 1:
				printf("Enter the character to be reaplaced:\n");
				scanf(" %c",&ch);
				printf("Enter the replacing character:\n");
				scanf(" %c",&rp);
				replace_front(str,ch,rp);
				break;
				case 2:
				printf("Enter the character to be reaplaced:\n");
				scanf(" %c",&ch);
				printf("Enter the replacing character:\n");
				scanf(" %c",&rp);
				replace_end(str,ch,rp);
				break;
				case 3:
				printf("Enter the position at which you need to replace the character:\n");
				scanf(" %d",&pos);
				printf("Enter the replacing character:\n");
				scanf(" %c",&rp);
				if(pos<=strlen(str))
				replace_at_pos(str,rp,pos);
				else
				printf("Replacement position is out of reach\n");
				break;
		}
	}
	return 0;
}
void replace_front(char str[],char ch,char rp)
{
	printf("The string before replacement is:\n%s\n",str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==ch)
		str[i]=rp;
	}
	printf("The resultant string after replacement is:\n%s\n",str);
}
void replace_end(char str[],char ch,char rp)
{
	printf("The string before replacement is:\n%s\n",str);
	for(i=strlen(str);i>=0;i--)
	{
		if(str[i]==ch)
		str[i]=rp;
	}
	printf("The resultant string after replacement is:\n%s\n",str);
}
void replace_at_pos(char str[],char rp,int pos)
{
    printf("The string before replacement is:\n%s\n",str);
	str[pos-1]=rp;
    printf("The resultant string after replacement is:\n%s\n",str);	
}
