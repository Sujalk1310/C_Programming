#include <stdio.h>
#include <string.h>
void main() {
    // Write a C program to find reverse of a string with function.
    char String[50];
    printf("Enter a String : ");
    scanf("%[^\n]",String);
    printf("%s",strrev(String));
}