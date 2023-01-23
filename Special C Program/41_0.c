// Find the Area of a Triangle Given All Three Sides
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area;
    printf("Enter a,b and c: ");
    scanf("%f%f%f", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("Area of Triangle is: %.2f", area);
}