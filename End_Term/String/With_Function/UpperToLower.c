#include <stdio.h>
#include <string.h>
void main() {
    // Write a C program to convert uppercase string to lowercase.
    char String[20];
    printf("Enter String : ");
    scanf("%[^\n]",String);
    printf("%s",strlwr(String));
}