#include <stdio.h>
#include <string.h>

// int main(){

//     char str[50];
//     printf("enter a string: ");
//     gets(str);
//     puts(str);
//     int i=0;
//     while (str[i] != '\0'){
//         i++;
//     }
//     printf("%d", i);
// }


// int main(){
//     int a = 3;
//     printf("%d %d %d", a, ++a, a++);
//     return 0;
// }

int main(){
    int something = 5;
    int *addressOf = &something;   

//* means value of and & means adress off

    printf("Adress se value nikalna hai to %d\n", *addressOf);
    printf("Value of variable %d and adress of variable %d\n", &something, addressOf);
    printf("Value of variable %d and adress of variable %u\n", something, addressOf);
    printf("Adress of adress %u", &addressOf);

    printf("%c", '%');
}