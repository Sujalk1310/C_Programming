#include <stdio.h>
#include <ctype.h>
void main() {
    char a;
    printf("Enter Character :\n");
    scanf("%c",&a);
    a = tolower(a);
    (a >= 'a' && a <= 'z')?printf("Alphabet"):((a >= '0' && a <= '9')?printf("Digits"):printf("Special Character"));
}