#include <stdio.h>
int Prime(int Num){
    int Cond = 1; 
    for (int i = 2; i < Num; i++){
        if (Num%i==0){
            return 0;
        }
    }
    return 1;
}
void main() {
    // 23.	Write a C program using function to print all Prime numbers between 1 to n using loop. 
    //      How to print all prime numbers between given interval using loop in C program. 
    //      Logic to print prime numbers in a given range in C program.
    int N1,N2; // Here take (N1 = 1) if from 1 to n.
    printf("Enter a from value : ");
    scanf("%d",&N1);
    printf("Enter a to value : ");
    scanf("%d",&N2);
    printf("All Primes from %d to %d are : \n",N1,N2);
    for (int i = N1; i <= N2; i++){
        if (Prime(i)){
            printf("%d, ",i);
        }
    }
}