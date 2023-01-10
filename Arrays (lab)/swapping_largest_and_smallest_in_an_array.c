/*Swapping largest and smallest number in an array*/
#include<stdio.h>
int  main( )
{
    int a[20],b[20],n,min=0,max=0,i,sml,lar,temp ;
    printf("Enter the Numbers of terms: ") ;
    scanf("%d",&n);
    printf("Enter the terms:\n") ;
    for(i=1;i<=n;i++)
    {
       scanf("%d",& a[i]) ;
        b[i] = a[i] ;
    }
    min=a[1] ;
    for(i=1;i<=n;i++)
    {
    if(a[i]<=min)
    {
    min = a[i] ;
    sml = i ;
    }
    if(a[i]>=max)
    {
    max = a[i] ;
    lar = i ;
    }
    }
    temp=a[sml] ;
    a[sml]=a[lar] ;
    a[lar]=temp ;
    printf("The Array entered by user are :\n") ;
    for(i=1;i<=n;i++)
    printf("%d\t",b[i]);
    printf("\nThe Array after interchanging the largenst and smallest element :\n") ;
    for(i=1;i<=n;i++)
    printf("%d\t",a[i]);
    return 0;
}
