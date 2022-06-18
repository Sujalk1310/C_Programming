#include <stdio.h>
void Fibonacci(int N) {
    int N1 = 0,N2 = 1,N3;
    for (int i = 0; i < N-2; i++){
        N3 = N1+N2;
        printf("%d ",N3);
        N1 = N2;
        N2 = N3;
    }  
}
void main() {
    // 28.	Write a C program using function to print Fibonacci series up to n terms using loop. 
    //      How to generate Fibonacci series up to n terms using loops in C programming. 
    //      Logic to print Fibonacci series in a given range in C programming or using pointer.
    int N;
    printf("Enter a No. : ");
    scanf("%d",&N);
    printf("%d %d ",0,1);
    Fibonacci(N);
}