#include <stdio.h>

int main() {
	// your code goes here
	int T,m,n,a;
	scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&n,&m);
        if((n/m)%2==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    
    }
	return 0;
}