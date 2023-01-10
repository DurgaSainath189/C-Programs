/*Alphabet,digit or symbol*/
#include <stdio.h>
int main()
{
  char ch;
  printf("Enter any character:\n");
  scanf("%c", &ch);
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' &&ch <= 'Z'))
  printf("Given character %c is an alpahabet",ch);
  else if(ch >= '0' && ch <= '9')
  printf("Given character %c is a digit",ch);
  else
  printf("Given character %c is a symbol",ch);
  return 0;
}
