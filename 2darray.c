#include<stdio.h>
int main()
{
    int marks[2][4]={{9,8,6,2},{7,7,1,8}};
    for(int i=1; i<=2; i++){
        for(int j=1, j<=4; j++){
            printf("The value of %d, %d of the array is %d\n", i, j, marks[i][j]);
        }
    }
    return 0;
}