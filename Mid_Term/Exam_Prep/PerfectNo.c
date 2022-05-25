#include <stdio.h>
void main() {
    int x,sum = 0;
    printf("Enter No. :\n");
    scanf("%d",&x);
    for (int i = 1; i <= x/2; i++) {
        if (x%i == 0){
            sum += i;
        }
    }
    if (sum == x) {
        printf("Perfect No.");
    }
}