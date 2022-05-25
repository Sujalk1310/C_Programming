#include <stdio.h>
void main() {
    char a;
    printf("Enter Character :\n");
    scanf("%c",&a);
    ((a >= 65 && a <= 91) || (a >= 97 && a <= 123))?printf("Alphabet"):printf("Not Alphabet");
}