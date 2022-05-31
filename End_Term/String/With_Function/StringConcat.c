#include <stdio.h>
#include <string.h>
void main() {
    // Write a C program to concatenate two strings with function.
    char String[20],String2[20],k;
    printf("Enter String 1 Value : ");
    scanf("%[^\n]",String);
    scanf("%c",&k); // Extra for '\n'...
    printf("Enter String 2 Value : ");
    scanf("%[^\n]",String2);
    strcat(String,String2);
    printf("Concatinated String : %s",String);
}