#include<stdio.h>

int main()
{
    float x,y,z;
    printf("/nenter the value of hardness : ");
    scanf("%f",&x);

    printf("\nenter the value of carbon content :");
    scanf("%f",&y);

    printf("\nenter the value of tensile strength :");
    scanf("%f",&z);

    if((x>50) && (y<0.7) && (z>5600))
    {
        printf("\nGrade is 10");
    }

    else if((x>50) && (y<0.7))
    {
        printf("\nGrade is 9");
    }

    else if((y<0.7) && (z>5600))
    {
        printf("\nGrade is 8");
    }

    else if((x>50) && (z>5600))
    {
        printf("\nGrade is 7");
    }
    else if((x>50) || (y<0.7) || (z>5600))
    {
        printf("\nGrade is 6");
    }

    else {
        printf("\nGrade is 5");
    }

    return 0;
}
