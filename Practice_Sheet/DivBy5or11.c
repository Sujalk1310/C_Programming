#include <stdio.h>
void main() {
    //11.	Write a C program to check whether a number is divisible by 5 and 11 or not using if else. 
    //      How to check divisibility of any number in C programming. 
    //      C program to enter any number and check whether it is divisible by 5 and 11 or not. 
    //      Logic to check divisibility of a number in C program.
    int Num;
    printf("Enter a No. : ");
    scanf("%d",&Num);
    ((Num%5==0)&&(Num%11==0))?(printf("No. is Divisible by both 5 and 11.")):((Num%5==0)?printf("No. is Divisible by 5."):((Num%11==0)?printf("No. is Divisible by 11."):printf("No. is not divisible by both 5 and 11.")));
    // if ((Num%5==0)&&(Num%11==0)){
    //     printf("No. is Divisible by both 5 and 11.");
    // }
    // else {
    //     if (Num%5==0){
    //         printf("No. is Divisible by 5.");
    //     }
    //     else {
    //         if (Num%11==0){
    //             printf("No. is Divisible by 11.")
    //         }
    //         else {
    //             printf("No. is not divisible by both 5 and 11.");
    //         }
    //     }
    // }
}