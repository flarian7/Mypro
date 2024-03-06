#include<stdio.h>

int main()
{
    int s1;
    printf("\nEnter the marks in s1 :");
    scanf("%d",&s1);

    int s2;
    printf("\nEnter the marks in s2 :");
    scanf("%d",&s2);

     int s3;
    printf("\nEnter the marks in s3 :");
    scanf("%d",&s3);

    int s4;
    printf("\nEnter the marks in s4 :");
    scanf("%d",&s4);

    int s5;
    printf("\nEnter the marks in s5 :");
    scanf("%d",&s5);

     int per = (s1+s2+s3+s4+s5)*100 / 500;
     printf("\n Overall marks are %d :",per);

    if(per>=60)
    {
        printf("First divison\n");
    }
    else
    {
        if(per>=50)
        {
            printf("Second Divison\n");
        }
        else
            {
          if(per>=40)
          {
              printf("Third Divison\n");
          }
          else {
            printf("Fail\n");
          }
        }
    }








    return 0;
}
