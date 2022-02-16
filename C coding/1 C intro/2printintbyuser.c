//C Program to Print an Integer (Entered by the User)

#include <stdio.h>

int main(){
    int numvar;
    printf("Enter a variable: ");
    scanf("%d", &numvar);
    printf("number entered by user was %d", numvar);
    return 0;
}