#include <stdio.h>

int main(){

    int var1, var2, tempswap;
    printf("Enter first integer: ");
    scanf("%d", &var1);
    printf("Enter second integer: ");
    scanf("%d", &var2);
    printf("Before swap Value 1: %d and Value 2: %d\n", var1, var2);
    tempswap = var1;
    var1 = var2;
    var2 = tempswap;
    printf("After swap Value 1: %d and Value 2: %d", var1, var2);

    return 0;
}