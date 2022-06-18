#include <stdio.h>
void main() {
    //10.	 Write a C program to input a character and check whether the character is alphabet or not using Conditional/Ternary operator ?:. 
    //      How to check alphabets using conditional operator in C programming.
    char X;
    printf("Enter a character : ");
    scanf("%c",&X);
    ((X>=65&&X<=90)||(X>=96&&X<=122))?printf("Alphabet"):printf("Not Alphabet");
}