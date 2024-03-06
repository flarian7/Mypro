#include<stdio.h>

int main()
{
    int a;
    printf("enter the 1st side :");
    scanf("%d",&a);
    int b;
    printf("enter the 2nd side :");
    scanf("%d",&b);
    int c;
    printf("enter the 3rd side :");
    scanf("%d",&c);

    if((a+b)>c && (b+c)>a && (a+c)>b)
    {
        printf("%d ,%d ,%d can be sides of a triangle",a,b,c);
    }

    else
    {
        printf("%d ,%d ,%d cannot be sides of a triangle",a,b,c);
    }



    return 0;
}
