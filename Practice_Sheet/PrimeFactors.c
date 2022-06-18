#include <stdio.h>
int Prime(int Num){
    // 24.	Write a C program using function to input a number from user and find Prime factors of the given number using loop. 
    //      C program to list all prime factors of a given number. 
    //      Logic to find prime factors of a number in C programming.
    for (int i = 2; i < Num; i++){
        if (Num%i==0){
            return 0;
        }
    }
    return 1;
}
void Factors(int Num){
    for (int i = 2; i < Num; i++){
        if (Num%i == 0){
            if (Prime(i)){
                printf("%d, ",i);
            }
        }
    }
}
void main() {
    int Num;
    printf("Enter a No. : ");
    scanf("%d",&Num);
    Factors(Num);
    printf("Are Prime Factors.");
}