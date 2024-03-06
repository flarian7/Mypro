#include<stdio.h>

int main()
{
    int x1;
    printf("Enter the value : \n");
    scanf("%d\n",&x1);
    int x2;
    printf("Enter the value : \n");
    scanf("%d\n",&x2);
    int x3;
    printf("Enter the value : \n");
    scanf("%d\n",&x3);
    int y1;
    printf("Enter the value : \n");
    scanf("%d\n",&y1);
    int y2;
    printf("Enter the value : \n");

    scanf("%d\n",&y2);
    int y3;
    printf("Enter the value : \n");
    scanf("%d\n",&y3);
    int m1 = ((y2-y1)/(x2-x1));
    int m2 = ((y3-y2)/(x3-x2));

   printf("\n%d is the value of m1",m1);
    printf("\n%d is the value of m2",m2);



    return 0;
}
