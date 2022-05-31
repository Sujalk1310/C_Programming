#include <stdio.h>
#include <string.h>
void main() {
    // Write a C program to check whether a string is palindrome or not.
    char str[50];
    printf("Enter a string :\n");
    scanf("%[^\n]",str);
    strlwr(str);
    printf(str);
    int j = strlen(str)-1,Cond = 1;
    for (int i = 0; i < (strlen(str)/2); i++){
        if (str[i] != str[j]){
            printf("Not a Palindrome !!");
            Cond = 0;
            break;
        }
        else {
            j -= 1;
        }
    }
    if (Cond == 1){
        printf("It is a Palindrome !!");
    }
}