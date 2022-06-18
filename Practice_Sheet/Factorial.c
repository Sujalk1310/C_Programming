#include <stdio.h>
int Factorial(int Num){
    int Fact = 1;
    for (int i = 2; i <= Num; i++){
        Fact *= i;
    }
    return Fact;
}
void main() {
    //22.	Write a C program using function to input a number and calculate its factorial using for loop. 
    //      How to find factorial of a number in C program using loop. 
    //      Logic to find factorial of a number in C programming.
    int Num; 
    printf("Enter a No. : ");
    scanf("%d",&Num);
    printf("%d",Factorial(Num));
}