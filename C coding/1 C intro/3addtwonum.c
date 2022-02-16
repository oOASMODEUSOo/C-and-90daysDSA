//C Program to Add Two Integers

#include <stdio.h>

int main(){
    int x,y;
    printf("variable 1: ");
    scanf("%d", &x);
    printf("variable 2: ");
    scanf("%d", &y);
    int final = x+y;
    printf("Adding these 2 numbers %d", final);
}