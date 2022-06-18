#include <stdio.h>
void main() {
    // 9.	Write a C program to input a year and check whether year is leap year or not using conditional/ternary operator ?:. 
    //      How to check leap year using conditional operator in C programming.
    int Year;
    printf("Enter Year : ");
    scanf("%d",&Year);
    int Cond = (Year%100==0)?((Year%400==0)?1:0):((Year%4==0)?1:0);
    if (Cond){
        printf("%d is a Leap Year",Year);
    }
    else {
        printf("%d is not a Leap Year",Year);
    }
}