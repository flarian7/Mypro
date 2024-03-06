#include<stdio.h>

int main() {
int a,b;
printf("Enter the values of a,b\n");
scanf("%d %d",&a,&b);
int q = (a%b);
printf("The remainder when %d is divided by %d is : %d",a,b,q);



return 0;
}


