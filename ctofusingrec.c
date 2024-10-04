#include<stdio.h>
float convertTemp(float celsius);
int main(){
    float celsius;
    printf("Enter the temptreature in celsius: ");
    scanf("%f", &celsius);
    float far = convertTemp(celsius);
    printf("Tempreature in far : %f", far);
    return 0;
}
float convertTemp(float celsius){
    float far = celsius * (9.0/5.0) + 32;
    return far;
}