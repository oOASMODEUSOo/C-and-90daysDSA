//C Program to Find the Size of int, float, double and char

#include <stdio.h>

int main(){
    int intvar;
    float flovar;
    double douvar;
    char chavar;
    printf("int: %d\n",sizeof(intvar));
    printf("float: %d\n",sizeof(flovar));
    printf("double: %d\n",sizeof(douvar));
    printf("char: %d",sizeof(chavar));

    return 0;
}