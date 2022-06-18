#include <stdio.h>
void main() {
    // 15.	Write a C program to create menu driven calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case and functions. 
    //      The calculator should input two numbers and an operator from user. 
    //      It should perform operation according to the operator entered and must take input in given format.
    //       <number 1> <operator> <number 2>

    int X,Y;
    char Op;
    printf("Enter the equation : ");
    scanf("%d %c %d",&X,&Op,&Y);
    switch(Op){
        case '+':
            printf("%d %c %d = %d",X,Op,Y,X+Y);
            break;
        case '-':
            printf("%d %c %d = %d",X,Op,Y,X-Y);
            break;
        case '*':
            printf("%d %c %d = %d",X,Op,Y,X*Y);
            break;
        case '/':
            printf("%d %c %d = %d",X,Op,Y,X/Y);
            break;
        default : 
            printf("Error");
            break;
    }
}