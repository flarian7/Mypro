 #include<stdio.h>

//Calculating Area and perimeter of rectangle //

int main()
{
    int length,breadth;
    float radius;

    printf("Enter length of rectangle :");
    scanf("%d",&length);
    printf("Enter breadth of rectangle :");
    scanf("%d",&breadth);
    printf("Enter the radius of circle :");
    scanf("%f",&radius);

    float perimeter = 2 * (length + breadth);
    printf("Perimeter of rectangle is %f\n",perimeter);

    float ar = length * breadth;
    printf("Area of the rectangle is %f\n",ar);

    float circumference = 2 * 3.14 * radius;
    printf("Circumference of the circle is %f\n",circumference);

    float Area = 3.14 * radius * radius ;
    printf("Area of the circle is %f\n",Area);




    return 0;
}
