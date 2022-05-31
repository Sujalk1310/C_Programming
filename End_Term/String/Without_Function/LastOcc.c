#include <stdio.h>
#include <string.h>
void main() {
    // Write a C program to find last occurrence of a character in a given string. 
    char str[50],C;
    printf("Enter String :\n");
    scanf("%[^\n]",str);
    scanf("%c");
    printf("Enter the character you want to search :\n");
    scanf("%c",&C);
    for (int i = strlen(str)-1; i >= 0; i--){
        if (str[i] == C){
            printf("Found %c at Index : %d",C,i);
            break;
        }
    } 
}
