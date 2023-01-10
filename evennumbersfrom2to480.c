/*Even numbers from 2 to 480*/
#include<stdio.h>
int main()
{
    int i;
    for(i=1;;i++)
    {
        if(i>480)
            break; 
        if(i%2==0)
        printf("%d  ", i);
    }
    return 0;
}
