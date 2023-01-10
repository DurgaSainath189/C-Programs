#include <stdio.h>
int main()
{
    int a;
    char b;
    float c;
    double d;
    short int e;
    long int f;
    long long int g;
    printf("enter any integer:\n");
    scanf("%d",&a);
    printf("enter any character:\n");
    scanf(" %c",&b);
    printf("enter any floating point:\n");
    scanf("%f",&c);
    printf("enter any double floating point:\n");
    scanf("%lf",&d);
    printf("enter any short integer:\n");
    scanf("%d",&e);
    printf("enter any long integer:\n");
    scanf("%ld",&f);
    printf("enter any long long integer:\n");
    scanf("%lld",&g);
    printf("Hello! I am an integer. My value is %d and my size is %lu  bytes.\n",a, sizeof(int));
    printf("Hello! I am a character. My value is %c and my size is %lu byte.\n",b, sizeof(char));
    printf("Hello! I am a floating point variable  My value is %f and my size is %lu bytes\n",c, sizeof(float));
    printf("Hello! I am a double floating point variable  My value is %lf and my size is %lu bytes\n",d, sizeof(double));
    printf("Hello! I am a short integer. My value is %d and my size is %lu  bytes.\n",e, sizeof( short int));
    printf("Hello! I am a long integer. My value is %ld and my size is %lu  bytes.\n",f, sizeof(long int));
    printf("Hello! I am a long long integer. My value is %lld and my size is %lu  bytes.\n",g, sizeof(long long int));
    return 0;
}
