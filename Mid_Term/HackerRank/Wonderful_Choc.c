#include <stdio.h>
int main() {
    int C,D,N,Tot,L;
    scanf("%d",&C);
    scanf("%d",&N);
    scanf("%d",&D);
    Tot = C+(D*N);
    L = Tot-N;
    printf("%d",L);
    return 0;
}