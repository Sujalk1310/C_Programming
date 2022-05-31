#include <stdio.h>
void main() {
    // 	Write a C program to find length of a string without function.
    char String[20];
    int C = 0;
    printf("Enter String : ");
    scanf("%[^\n]",String);
    for (int i = 0; String[i] != '\0'; i++){
        C += 1;
    }
    printf("Length of String : %d",C);
}