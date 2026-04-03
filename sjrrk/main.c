#include <stdio.h>
#include <math.h>

int main()
{
    float s, area;

    printf("Enter the side of the equilateral triangle: ");
    scanf("%f", &s);

    area = (sqrt(3) / 4) * s * s;

    printf("Area of the equilateral triangle = %f\n", area);

    return 0;
}
