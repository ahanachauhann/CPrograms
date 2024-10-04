#include<stdio.h>
float areaSquare(float side);
float areaCircle(float radius);
float areaRectangle(int a, int b);
int main(){
    float a, b, side, radius;
    printf(" Enter the value of a and b: ");
    scanf("%f %f", &a, &b);
    printf(" \nEnter radius: ");
    scanf("%f", &radius);
    printf("\n Enter the side: ");
    scanf("%f", &side);
    printf("Area of square: %f",areaSquare(side));
    printf("Area of circle: %f",areaCircle(radius));
    printf("\nArea of rectangle: %f",areaRectangle(a, b));
    return 0;
}
float areaSquare(float side){
    return side*side;
}
float areaCircle(float radius){
    return 3.1415*radius*radius;
}
float areaRectangle(int a, int b){
    return a*b;
}