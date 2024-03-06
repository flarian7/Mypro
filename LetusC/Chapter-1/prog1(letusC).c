#include<stdio.h>

//Ramesh basic salary is input through the keyboard,
//His dearness allowance is 40% of basic salary,
//and house rent allowance is 20% of basic salary.
//Write a program to calculate his gross salary.

int main()
{
    float bs,da,ha,grpay;
    printf("enter the basic salary of Ramesh :");
    scanf("%f",&bs);
    da = (0.4 * bs) ;
    ha = (0.2 * bs) ;
    grpay = (bs + da + ha);

    printf("Basic salary of Ramesh : %.2f\n",bs);
    printf("Dearness allowance of Ramesh : %.2f\n",da);
    printf("Rent allowance of Ramesh : %.2f\n",ha);
    printf("Gross salary of Ramesh : %.2f\n",grpay);



    return 0;
}
