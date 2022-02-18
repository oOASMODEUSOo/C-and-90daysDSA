//C Program to Check Whether a Number is Even or Odd

#include <stdio.h>

int main(){
    int variable;
    printf("Enter a variable: ");
    scanf("%d", &variable);
    if (variable % 2 == 0){
        printf("Even hai bhai");
    }
    else{
        printf("Odd hai bhai");
    }
    return 0;
}