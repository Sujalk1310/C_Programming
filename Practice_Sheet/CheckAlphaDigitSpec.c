#include <stdio.h>
void main() {
    // 12.	Write a C program to input a character from user and check whether given character is alphabet, digit or special character using if else. 
    //      How to check if a character is alphabet, digits or any other special character using if else in C programming. 
    //      Logic to check alphabet, digit or special character in C programming.
    char X;
    printf("Enter a character : ");
    scanf("%c",&X);
    if (X >= 65 && X <= 122){
        printf("Alphabet");
    }
    else if (X >= 48 && X <= 57){
        printf("Digits");
    }
    else {
        printf("Special Character");
    }
}