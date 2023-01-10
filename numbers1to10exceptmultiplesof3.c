#include <stdio.h>
int main()
{
	int c=0;
	while(c<=10)
	{
		c++;
		if(c==3||c==6||c==9)
        {
		continue;                          
		}
		printf("\t %d", c);
    }
	return 0;
}
