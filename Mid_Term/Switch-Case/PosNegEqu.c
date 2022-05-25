#include <stdio.h>
void main() {
    int x,C,Z;
    printf("Enter No. :\n");
    scanf("%d",&x);
    C = x>=0;
    switch (C) {
        case 1:
            Z = (x == 0);
            switch (Z) {
                case 1:
                    printf("Zero");
                    break;
                default:
                    printf("Positive");
                    break;
            }
            break;
        case 0:
            printf("Negative");
            break;
    }
}