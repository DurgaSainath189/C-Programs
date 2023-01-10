#include <stdio.h>
#include <ctype.h>
int main()
 {
   char ch;
   printf("Enter a character: ");
   scanf("%c", &ch);
   if (!isalpha(ch))
      printf("%c is neither a vowel nor a consonant.\n", ch);
   else if ((ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch== 'u' || ch=='U'))
      printf("Given Character %c is a vowel.", ch);
   else
      printf("Given Character %c is a consonant.", ch);
   return 0;
}
