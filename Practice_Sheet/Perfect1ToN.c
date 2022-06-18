#include <stdio.h>
int Perfect(int Num){
    int Sum = 0;
    for (int i = 1; i < Num; i++){
        if (Num%i==0){
            Sum += i;
        }
    }
    if (Sum == Num){
        return 1;
    }
    return 0;
}
void main() {
    // 26.	Write a C program using function to find all Perfect numbers between 1 to n. 
    //      C program to find all perfect numbers between given range. 
    //      How to generate all perfect numbers between given interval using loop in C programming? 
    //      Logic to find all perfect numbers in a given range in C programming.
    int N;
    printf("Enter a No. : ");
    scanf("%d",&N);
    for (int i = 1; i <= N; i++){    
        if (Perfect(i)){
            printf("%d, ",i);
        }
    }
    printf("Are Perfect No's.");
}