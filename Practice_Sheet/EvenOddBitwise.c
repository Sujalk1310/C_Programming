#include <stdio.h>
void main() {
    // 8.	Write a C program to input any number and check whether the given number is even or odd using bitwise operator. 
    //      How to check whether a number is even or odd using bitwise operator in C programming. 
    //      Logic to check even odd using bitwise operator in C programming.
    int Num;
    printf("Enter the No. : ");
    scanf("%d",&Num);
    if (Num&1){
        printf("No. if Odd");
    }
    else {
        printf("No. is Even");
    }
}