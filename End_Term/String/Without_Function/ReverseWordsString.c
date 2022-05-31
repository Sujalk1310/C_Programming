#include <stdio.h>
#include <string.h>
void main() {
    // Write a C program to reverse order of words in a given string.
    char str[50];
    printf("Enter a string :\n");
    scanf("%[^\n]",str);
    for (int i = strlen(str); i >= 0; i--) {
        if (str[i] == ' ') {
            int j = i+1;
            while (str[j] != ' ' && str[j] != '\0'){
                printf("%c",str[j]); 
                j += 1;
            }
            printf(" ");
        }
        else if (i == 0){
            int j = i;
            while (str[j] != ' ' && str[j] != '\0'){
                printf("%c",str[j]); 
                j += 1;
            }
            printf(" ");
        }
    }
}