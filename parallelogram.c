#include<stdio.h>
int main()
{
    int b, h, area;
    printf("Enter the breadth : ");
    scanf("%d", &b);
    printf("Enter the height : ");
    scanf("%d", &h);
    area = b * h;
    printf("Area: %d", area);
    return 0;
}