#include<stdio.h>

int main()
{
    int x;
    printf("Enter the value of integer :\n");
    scanf("%d",&x);

     if(x<0)
    {
        x = x *(-1);
        printf("The absolute value is : %d ",x);
    }

      else
    {
        printf("The absolute value is : %d ",x);
    }


    return 0;
}
