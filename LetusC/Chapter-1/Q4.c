#include<stdio.h>


int main()
{
    int x;
    printf("Enter any year which u want to check whether it is leap yr or not :\n");
    scanf("%d",&x);

if(x%400==0)
{
    printf("%d is a leap year",x);
}

else if(x%4==0 && x%100!=0)
{
    printf("%d is a leap year",x);
}


    else
    {
        printf("%d is not a leap yr",x);
    }



    return 0;
}
