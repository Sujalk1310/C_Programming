#include <stdio.h>
#include <string.h>
void main() {
    // Write a C program to count occurrences of a character in given string.
    char str[50],C,m;
    int K = 0;
    printf("Enter String :\n");
    scanf("%[^\n]",str);
    scanf("%c",&m);
    printf("Enter the character you want to search :\n");
    scanf("%c",&C);
    for (int i = 0; i < strlen(str); i++){
        if (str[i] == C){
            K += 1;
        }
    } 
    printf("%c Occures %d times",C,K);
}
