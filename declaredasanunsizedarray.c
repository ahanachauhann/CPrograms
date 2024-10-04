#include<stdio.h>
int findMin(int arr[], int size)
{
    int min = arr[0];
    for(int i=1; i<size; i++){
        if(min>arr[i]){
            min =arr[i];
        }
    }
    return 0;
}
int main (){
    int arr[5]= {76, 89, 67, 23, 24};
    printf("The minimum element is %d\n", findMin(arr,5));
    return 0;
}