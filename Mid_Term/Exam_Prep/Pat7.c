#include <stdio.h>
void main() {
    int chr = 65;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j <= i; j++){
            printf("%c",chr+j);
        }
        printf("\n");
    }
}