#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character:");
	scanf("%c",&ch);
	switch(ch)
	{
		case'a':
			printf("%c is an vowel",ch);
			break;
	    case'A':
			printf("%c is an vowel",ch);
			break;
		case'e':
			printf("%c is an vowel",ch);
			break;
		case'E':
			printf("%c is an vowel",ch);
			break;
		case'i':
			printf("%c is an vowel",ch);
			break;
		case'I':
			printf("%c is an vowel",ch);
			break;
		case'o':
			printf("%c is an vowel",ch);
			break;
		case'O':
			printf("%c is an vowel",ch);
			break;
		case'u':
			printf("%c is an vowel",ch);
			break;
		case'U':
			printf("%c is an vowel",ch);
			break;
		default:
			printf("%c is a consonant",ch);
	}
	return 0;
}
