#include <stdio.h>
#include <string.h>
void main() {
    // Write a C program to find reverse of a string without function.
    char String[50];
    printf("Enter a String : ");
    scanf("%[^\n]",String);
    for (int i = strlen(String)-1; i >= 0; i--){
        printf("%c",String[i]);
    }
}