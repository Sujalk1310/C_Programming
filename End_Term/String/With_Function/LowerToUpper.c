#include <stdio.h>
#include <string.h>
void main() {
    // Write a C program to convert lowercase string to uppercase.
    char String[20];
    printf("Enter String : ");
    scanf("%[^\n]",String);
    printf("%s",strupr(String));
}