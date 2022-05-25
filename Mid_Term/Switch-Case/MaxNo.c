#include <stdio.h>
void main() {
    int x,y,C = 0;
    printf("Enter 1st No. :\n");
    scanf("%d",&x);
    printf("Enter 2nd No. :\n");
    scanf("%d",&y);
    C = x>y;
    switch (C) {
        case 1:
            printf("%d",x);
            break;
        case 0:
            printf("%d",y);
            break;
    }
    // Other Way -->
    // if (x>y) {
    //     C = 1;
    // }
    // else if (y>x) {
    //     C = 2;
    // }
    // switch (C) {
    //     case 1:
    //         printf("%d",x);
    //         break;
    //     case 2:
    //         printf("%d",y);
    //         break;
    //     default:
    //         printf("Invalid Input");
    // }
}