#include <stdio.h>
void main() {
    char a;
    printf("Enter Character :\n");
    scanf("%c",&a);
    if (a >= 'a' && a <= 'z'){
        printf("Lowercase");
    }
    else if (a >= 'A' && a <= 'Z') {
        printf("UpperCase");
    }
    else {
        printf("Invalid Input");
    }
}