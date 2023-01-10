/*Vowel or not*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character:");
	scanf("%c",&ch);
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' &&ch <= 'Z'))
	{
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	printf("%c is an vowel",ch);
	else
	printf("%c is a consonent",ch);
    }
    else 
    printf("%c is neither a vowel nor a consonant.\n", ch);
	return 0;
}
