#include <stdio.h>
#include <ctype.h>
void main() {
    char a;
    printf("Enter Character :\n");
    scanf("%c",&a);
    a = tolower(a);
    if (a >= 'a' && a <= 'z'){
        printf("Alphabet");
    }
    else if (a >= '0' && a <= '9') {
        printf("Digits");
    }
    else {
        printf("Special Character");
    }
}