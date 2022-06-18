#include <stdio.h>
void main() {
    //14.	Write a C program to check leap year using if else. 
    //      How to check whether a given year is leap year or not in C programming. 
    //      C Program to input year from user and check whether the given year is leap year or not using ladder if else. 
    //      Logic to check leap year in C programming.
    int Year;
    printf("Enter Year : ");
    scanf("%d",&Year);
    if (Year%100==0){
        if (Year%400==0){
            printf("Leap Year");
        }
        else {
            printf("Not Leap Year");
        }
    }
    else {
        if (Year%4==0){
            printf("Leap Year");
        }
        else {
            printf("Not Leap Year");
    }
    }
}