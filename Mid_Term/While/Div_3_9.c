#include <stdio.h>
void main() {
    int x = 1000,i = 1;
    while (i <= x) {
        if (i%3 == 0 && i%9 == 0) {
            printf("%d",i);
            printf("\n");
        }
        i++;
    }
}