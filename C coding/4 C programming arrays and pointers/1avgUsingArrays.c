//C Program to Calculate Average Using Arrays

#include <stdio.h> 

int main(){
    int ElementNum;
    int summation = 0;
    printf("How many number do you want to input: ");
    scanf("%d", &ElementNum);
    int arr[ElementNum];
    for (int i = 0; i < ElementNum; ++i){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < ElementNum; ++i){
        summation = summation + arr[i];
    }

    int avg = summation/ElementNum;
    printf("The average of the numbers entered is %d", avg);

    return 0;
}