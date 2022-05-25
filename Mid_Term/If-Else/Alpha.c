#include <stdio.h>
void main() {
    char a;
    printf("Enter Character :\n");
    scanf("%c",&a);
    if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122)){
        printf("Alphabet");
    }
    else {
        printf("Not Alphabet");
    }
}