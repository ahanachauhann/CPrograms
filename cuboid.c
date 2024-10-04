#include<stdio.h>
int main()
{
    int l, w, h, area;
    printf("Enter the lenght : ");
    scanf("%d", &l);
    printf("Enter the width : ");
    scanf("%d", &w);
    printf("Enter the height : ");
    scanf("%d", &h);
    area = 2*(l*w + w*h + l*h);
    printf("Area of cuboid : %d", area);
    return 0;

}