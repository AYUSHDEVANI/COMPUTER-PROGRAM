#include <stdio.h>

#define PI 3.1415
void main()

{
    float rad = 5;
    float area, circum;
    area = PI * rad * rad;
    circum = 2 * PI * rad;

    printf("Area of circle = %f\n", area);

    printf("Circumference of circle = %f\n", circum);
}