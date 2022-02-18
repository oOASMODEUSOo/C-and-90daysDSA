//C Program to Check Whether a Character is a Vowel or Consonant

#include <stdio.h>

int main(){
    char something;
    printf("Enter a char value: ");
    scanf("%c", &something);
    if(something=="a" || something=="e" || something=="i" || something=="o" || something=="u"){
        printf("its a small case vovel");
    }

    else if(something=="A" || something=="E" || something=="I" || something=="O" || something=="U"){
        printf("its a big case vovel");
    }

    else{
        printf("its consonant");
    }

    return 0;
}