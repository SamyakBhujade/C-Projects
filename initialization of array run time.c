#include<stdio.h>
int main(){
    //Declaring array with compile time initialization//
    int array[5]={1,2,3,4,5};
    //Declaring variables//
    int i;
    //Printing O/p using for loop//
    printf("Displaying array of elements :");
    for(i=0;i<5;i++){
       scanf("%d",&array[i]);
  
    }
    printf("the values of array is  ");
    for(i=0;i<5;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
} 