#include <stdlib.h>     // StackOverflow says it is required to avoid "implicit declaration of function 'srand'" error while randomizing
#include <stdio.h>      // Standard library
#include <stdbool.h>    // Library required to use booleans
#include <string.h>     // Unlocks string functions
#include <windows.h>    // Unlocks windows functionalities


void typeWriter(char textToWrite[]);

int main() {

    typeWriter("This is my text, that I will be using to test.");
    typeWriter("This is my text, that I will be using to test.");
    typeWriter("This is my text, that I will be using to test.");

    return 0;
}

void typeWriter(char textToWrite[]) {
    int len = strlen(textToWrite);

    printf("> ");
    for (int i = 0; i < len; i++)
    {
        printf("%c", textToWrite[i]);
        Sleep(35);
    }
    printf("\n");
}