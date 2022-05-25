#include <stdio.h>
void main() {
    char chr = 65;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        for (int k = 0; k < 5-i; k++){
            printf("%c ",chr+k);
        }
        chr += 1;
        printf("\n");
    }
}