#include <stdio.h>
#include <string.h>
void main() {
    // Write a C program to count total number of words in a string.
    char String[50]="";
    int W = 0;
    printf("Enter a String : ");
    scanf("%[^\n]",String);
    for (int i = 0; i < strlen(String); i++){
        if (String[i] == ' '){
            W += 1;
        }
    }
    if (W) {
        W += 1;
    }
    else {
        W = !!strlen(String);
    }
    printf("Words : %d",W);
}