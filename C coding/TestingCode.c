#include <stdio.h>

int main(){

    char str[50];
    printf("enter a string: ");
    gets(str);
    puts(str);
    int i=0;
    while (str[i] != '\0'){
        i++;
    }
    printf("%d", i);
}
