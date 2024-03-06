#include<stdio.h>

int main(){
int a,b,c;
printf("enter the first number :");
scanf("%d",&a);

printf("enter the second number :");
scanf("%d",&b);

printf("enter the third number :");
scanf("%d",&c);

if(a>b && a>c)
{
    printf("%d is the greatest value",a);
}

else if(b>a && b>c)
{
    printf("%d is the greatest value",b);
}

else
{
    printf("%d is the greatest value",c);
}



return 0;
}
