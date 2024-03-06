#include<stdio.h>

int main()
{
    int n;
    printf("enter the value of the integer :");
    scanf("%d",&n);

    if(n%3==0 && n%5==0)
    {
        printf("%d is divisible by both 3 and 5",n);
    }

    else if(n%3==0  && n%5!=0)
    {
        printf("%d is divisible by 3 but not by 5",n);
    }

    else if(n%3!=0 && n%5==0)
    {
        printf("%d is divisible by 5 but not by 3",n);
    }

   else if(n%3!=0 && n%5!=0)
   {
       printf("%d is neither divisible by 3 nor by 5",n);
   }






    return 0;
}
