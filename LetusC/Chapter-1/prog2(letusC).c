#include<stdio.h>

//Calculating distance by converting it to m,inch,ft,cm via input.

int main()
{
float km,m,cm,inch,ft;
printf("\nEnter the distance in kilometers :");
scanf("%f",&km);
m = (km * 1000);
cm = (m * 100);
inch = (cm / 2.54);
ft = (inch /12);

printf("Distance in metres : %.1f\n",m);
printf("Distance in centimetres : %.1f\n",cm);
printf("Distance in inches : %.1f\n",inch);
printf("Distance in feet : %.1f\n",ft);



 return 0;
}
