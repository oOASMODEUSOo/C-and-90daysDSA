//C Program to Find the Largest Number Among Three Numbers

#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("Enter 3 numbers: ");
    scanf("%d", &num1);    
    scanf("%d", &num2);
    scanf("%d", &num3);   
    
    if (num1 >= num2 && num1 >= num3){
        printf("Number 1 is biggest");
    } 

    else if (num2 >= num1 && num2 >= num3){
        printf("Number 2 is biggest");
    }
    
    else if (num3 >= num1 && num3 >= num2){
        printf("Number 3 is biggest"); 
    }

    return 0;
}
