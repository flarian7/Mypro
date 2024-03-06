#include<stdio.h>

int main()
{

   int l;
   printf("Enter the length :");
   scanf("%d",&l);

      int b;
   printf("Enter the breadth :");
   scanf("%d",&b);

   int a = l*b;
   printf("The area of rectangle is equal to : %d\n",a);
   int p = 2 * (l+b);
   printf("Perimeter of rectangle is equal to :%d\n",p);


   if(a>p)
   {
       printf("Area is greater than perimeter");
   }

   else if(a<p)
   {
       printf("Perimeter is greater than area");
   }

   else if(a==p)
   {
       printf("Area is equal to perimeter");
   }





    return 0;
}
