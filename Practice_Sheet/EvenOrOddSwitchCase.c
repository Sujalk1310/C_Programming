#include <stdio.h>
void main() {
    // 16.	Write a C program to input number from user and check whether the number is even or odd using switch case. 
    //      How to check even or odd using switch case in C programming. 
    //      Logic to check whether a number is even or odd using switch case in C program.
    int Num;
    printf("Enter No. : ");
    scanf("%d",&Num);
    switch ((int)Num%2==0){ // Boolean Datatype converted to integer...
        case 0:
            printf("Odd");
            break;
        case 1:
            printf("Even"); 
            break;
        default : 
            printf("Error");
            break;
    }
}