#include<stdio.h>
void printOdd(int arr[], int n);
int main(){
  //
  //
}
void printOdd(int arr[], int n){
    int count = 0;
    for (int i = 1; i<n; i++){
        if(arr[i]%2!=0){
            count++;
        }

    }
    return count;
}