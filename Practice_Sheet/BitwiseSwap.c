#include <stdio.h>
void main() {
    // 7.	Write a C program to input any two numbers from user and swap values of both numbers using bitwise operator. 
    //      How to swap two number using bitwise operator in C programming. 
    //      Logic to swap two numbers using bitwise operator in C programming.
    int a,b;
    printf("Enter value for a : ");
    scanf("%d",&a);
    printf("Enter value for b : ");
    scanf("%d",&b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("Value of a : %d\nValue of b : %d\n",a,b);
}