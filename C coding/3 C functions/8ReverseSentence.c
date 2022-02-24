//C Program to Reverse a Sentence Using Recursion

#include <stdio.h>
void reverseSentence();
int main() {
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        printf("%u\n", &c);
        reverseSentence(); //bsdk ka function pause ho jata hai yahan pe jab tk vo if block false ni ho jata
        printf("%c", c);
    }
}
