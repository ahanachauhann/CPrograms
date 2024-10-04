#include<stdio.h>
int main()
{
    float a, b, pi, area;
    printf("Enter valuse of a axis : ");
    scanf("%f", &a);
    printf("Enter value of b axis : ");
    scanf("%f", &b);
    pi = 3.1415;
    area = pi * a *b;
    printf("Area of Ellipse : %f", area);
    return 0;
}