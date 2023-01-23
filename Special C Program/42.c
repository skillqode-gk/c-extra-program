// Find the Gravitational Force Acting Between Two Objects
#include <stdio.h>
float round(float F)
{
    float value = (int)(F * 100 + 0.5);
    return ((float)value / 100);
}

float force(double m1, double m2, double r)
{
    float G,F,a;
    G = 6.67 / 1e11;
    F = (G * m1 * m2) / (r * r);
    a = round(F);
    return a;
}

int main()
{
    float m1, m2, r;
    m1 = 5000000;
    m2 = 900000;
    r = 30;

    printf("The Gravitational Force is: %.2f N", force(m1, m2, r));

    return 0;
}