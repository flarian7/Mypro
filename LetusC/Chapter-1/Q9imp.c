#include<stdio.h>


int main()
{

    int a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);

if(a>b && a>c)
{
    printf("%d is the greatest number",a);
}

else if(b>a && b>c)
{
    printf("%d is the greatest number",b);
}
else if(c>a && c>b)
{
    printf("%d is the greatest number",c);
}

else if(a = b = c)
{
    printf("all have same value equal to %d",a);
}


    return 0;
}
