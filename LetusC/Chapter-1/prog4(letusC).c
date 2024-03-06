#include<stdio.h>


//Calculating temperature in degree centigrade //
int main()
{
    float fr,cent;
    printf("\nEnter the temperature(F):");
    scanf("%f",&fr);

    cent = 5.0 / 9.0 * (fr - 32);
    printf("Temperature in centigrade = %.2f\n",cent);





    return 0;
}
