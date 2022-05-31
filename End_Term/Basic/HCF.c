#include <stdio.h>
void main() {
    int x,y,HCF = 0,Min;
    printf("Enter 1st No. :\n");
    scanf("%d",&x);
    printf("Enter 2nd No. :\n");
    scanf("%d",&y);
    if (x < y) {
        Min = x;
    }
    else {
        Min = y;
    }
    for (int i = 2; i <= Min; i++) {
        if (x%i == 0 && y%i == 0){
            HCF = i;
        }
    }
    if (HCF != 0){
        printf("%d",HCF);
    }
    else {
        printf("No HCF");
    }
}