#include <stdio.h>
void main() {
    //  5.	Write a C program to input any number from user and set nth bit of the given number as 1. 
    //      How to set nth bit of a given number using bitwise operator in C programming. 
    //      Setting nth bit of a given number using bitwise operator.
    int Num,N,NewNum;
    printf("Enter the No. : ");
    scanf("%d",&Num);
    printf("Enter the bit you want to shift : ");
    scanf("%d",&N);
    NewNum = (1 << N) | Num;
    printf("New Number : %d",NewNum);
}