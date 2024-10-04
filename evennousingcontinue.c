#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the value : ");
    scanf("%d", &n);
    for (int i=2; i<=n; i++){
        if(i%2!=0){
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}