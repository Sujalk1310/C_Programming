#include <stdio.h>
void main() {
    int x,sum = 1;
    printf("Enter No. :\n");
    scanf("%d",&x);
    for (int i = 1; i <= x; i++){
        sum *= i;
    }
    printf("%d",sum);
}