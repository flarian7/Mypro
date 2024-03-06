#include<stdio.h>

int main()
{
    float cp;
    printf("enter the value of cost price :");
    scanf("%f",&cp);

    float sp;
    printf("enter the value of selling price :");
    scanf("%f",&sp);

     float Profit = sp - cp ;
     float  Loss = cp -sp ;

    if(sp>cp)
    {
        printf("Profit\n%f is the profit:", Profit);
    }

   else if(cp>sp)
   {
       printf("Loss\n%f is the loss",Loss);
   }

   else
   {
       printf("No profit No loss");
   }

    return 0;
}
