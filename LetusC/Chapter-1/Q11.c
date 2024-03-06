#include<stdio.h>


int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    if(n%5==0 || n%3==0)
    {
        if(n%15!=0)
        {
            printf("%d is divisible by 5 or 3 but not by 15 ",n);
        }
        else
        {
            printf("%d is divisible by 15",n);
        }
    }

    else
    {
        printf("%d is not divisible by 5 or 3",n);
    }




    return 0;
}
