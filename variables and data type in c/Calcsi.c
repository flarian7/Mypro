#include<stdio.h>

int main(){
 float p,r,t,si;
 printf("Enter the value of principal: ");
 scanf("%f",&p);
 printf("Enter the value of rate of interest :");
 scanf("%f",&r);
 printf("Enter the time: ");
 scanf("%f",&t);
 si = (p*r*t)/100;
 printf("The simple interest is: %f",si);

return 0 ;
}


