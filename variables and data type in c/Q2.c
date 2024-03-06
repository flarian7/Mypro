#include<stdio.h>

int main()
{

    int a;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("%d",a/2);

    float x;
    printf("\nEnter second number :");
    scanf("%f",&x);
    int y = x;
    printf("%d\n",y);
    float z ;
    z = x - y;
    printf("%f",z);


    return 0;
}
