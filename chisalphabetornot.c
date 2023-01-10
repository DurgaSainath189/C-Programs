#include <stdio.h>
int main()
{
  char ch;
  printf("Please enter a character\n");
  scanf("%c", &ch);
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' &&ch <= 'Z'))
  printf("given character %c is an alpahabet",ch);
  else
  printf("given character %c is not an alphabet",ch);
  return 0;
}
