//C Program to Find the Sum of Natural Numbers using Recursion

#include <stdio.h>

int SumCalc(int num){

    if (num != 0){
        return num + SumCalc(num-1);
    }
    else{
        return num;
    }
}

int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int final = SumCalc(num);
    printf("%d", final);

    return 0;
}
