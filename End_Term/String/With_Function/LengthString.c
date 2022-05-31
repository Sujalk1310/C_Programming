#include <stdio.h>
#include <string.h>
void main() {
    // 	Write a C program to find length of a string with function.
    char String[20];
    printf("Enter String : ");
    scanf("%[^\n]",String);
    printf("Length of String : %d",strlen(String));
}