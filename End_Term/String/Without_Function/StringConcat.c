#include <stdio.h>
void main() {
    // Write a C program to concatenate two strings without function.
    char String[20],String2[20],k;
    int c;
    printf("Enter String 1 Value : ");
    scanf("%[^\n]",String);
    scanf("%c",&k); // Extra for '\n'...
    printf("Enter String 2 Value : ");
    scanf("%[^\n]",String2);
    for (int i = 0; String[i] != '\0'; i++){
        c += 1;
    }
    // c = strlen(String);
    for (int i = 0; String2[i] != '\0'; i++){
        String[c] = String2[i];
        c += 1; 
    }
    String[c] = '\0';
    printf("Concatinated String : %s",String);
}