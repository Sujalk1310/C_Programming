#include <stdio.h>
void main() {
    int k = 1;
    for (int i = 0; i < 5; i++){
        for (int j = 5; j > i; j--){
            printf("%d ",k);
            k += 1;
        }
        k = 1;
        printf("\n");
    }
}