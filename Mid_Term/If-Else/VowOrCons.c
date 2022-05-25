#include <stdio.h>
#include <ctype.h>
void main() {
    char a;
    printf("Enter Character :\n");
    scanf("%c",&a);
    a = tolower(a);
    if (a == 97 || a == 101 || a == 105 || a == 111 || a == 117) { // isalpha(a);
        printf("Vowel");
    }
    else {
        printf("Consonant");
    }
}