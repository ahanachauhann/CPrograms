#include<stdio.h>
int main ()
{
   int marks[4]={45,7,8,9};
  // for(int i=0; i<=4; i++){
    //printf("Enter the value of %d value of the array : ", i);
    
   for(int i=1; i<=4; i++){
    printf("The %dth value of the array is %d\n", i, marks[i]);
   }
    return 0;
}