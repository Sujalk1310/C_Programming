#include <stdio.h>
int main() {
    long int C,K,N,Tot = 0;
    scanf("%ld",&C);
    scanf("%ld",&K);
    scanf("%ld",&N);
    for (int i = 0; i < N; i++){
        C *= K;
        Tot += C;
    }
    printf("%ld",C);
    return 0;
}