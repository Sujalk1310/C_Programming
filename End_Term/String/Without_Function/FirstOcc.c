#include <stdio.h>
#include <string.h>
void main() {
    // Write a C program to find first occurrence of a character in a given string. 
    char str[50],C;
    printf("Enter String :\n");
    scanf("%[^\n]",str);
    scanf("%c");
    printf("Enter the character you want to search :\n");
    scanf("%c",&C);
    for (int i = 0; i < strlen(str); i++){
        if (str[i] == C){
            printf("Found %c at Index : %d",C,i);
            break;
        }
    } 
}
