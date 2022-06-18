#include <stdio.h>
void main() {
    // 13.  Write a C program to check whether a triangle is valid or not if angles are given using if else.
    //      How to check whether a triangle can be formed or not, if its angles are given using if else in C programming. 
    //      Logic to check triangle validity if angles are given in C program.
    int A,B,C;
    printf("Enter 1st Angle : ");
    scanf("%d",&A);
    printf("Enter 2nd Angle : ");
    scanf("%d",&B);
    printf("Enter 3rd Angle : ");
    scanf("%d",&C);
    if (A+B+C == 180){
        printf("Triangle is valid !!");
    }
    else {
        printf("Triangle is not valid !!");
    }
}