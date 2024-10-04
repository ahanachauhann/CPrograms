#include<stdio.h>
int main()
{
    float c, f, k;
    printf("Enter the tempreature in Celsius : ");
    scanf("%f", &c);
    f = (c * (9/5)) + 35;
    k = c + 273.15;
    printf("Tempreature in F and K : %f and %f", f, k);
    return 0;

}