#include <stdio.h>
void main() {
    int k = 5;
    for (int i = 0; i < 5; i++){
        for (int j = 5; j > i; j--){
            printf("%d ",k);
            k -= 1;
        }
        k = 5;
        printf("\n");
    }
}