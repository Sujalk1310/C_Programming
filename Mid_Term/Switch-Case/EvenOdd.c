#include <stdio.h>
void main() {
    int x,y,C;
    printf("Enter No. :\n");
    scanf("%d",&x);
    C = x%2 == 0;
    switch (C) {
        case 1:
            printf("Even");
            break;
        case 0:
            printf("Odd");
            break;
    }
}