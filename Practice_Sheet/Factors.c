#include <stdio.h>
void Factors(int Num){
    for (int i = 1; i < Num; i++){
        if (Num%i == 0){
            printf("%d, ",i);
        }
    }
}
void main() {
    // 21.  Write a C program using function to input a number from user and find all factors of the given number using for loop. 
    //      How to find factors of a number in C program. 
    //      Logic to find all factors of a given number in C programming.
    int Num;
    printf("Enter a No. : ");
    scanf("%d",&Num);
    Factors(Num);
    printf("Are the Factor's of %d",Num);
}