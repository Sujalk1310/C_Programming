#include <stdio.h>
void main() {
    char a;
    printf("Enter a character (a-z) :\n");
    scanf("%c",&a);
    if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z') { 
        switch (a) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("Vowel");
                break;
            default:
                printf("Consonant");
                break;
        }  
    }
    else {
        printf("Invalid Input");
    }
}