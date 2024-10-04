#include<stdio.h>
int main ()
{
    char a;
    scanf("%c", &a);
    int b = a;
    b = b - 32;
    printf("%c", b);
    return 0;
}