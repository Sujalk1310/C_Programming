#include <stdio.h>
void main() {
    int x,y,LCM;
    printf("Enter 1st No. :\n");
    scanf("%d",&x);
    printf("Enter 2nd No. :\n");
    scanf("%d",&y);
    if (x>y) {
        LCM = x;
    }
    else {
        LCM = y;
    }
    while (1) {
        if (LCM%x == 0 && LCM%y == 0){
            printf("%d",LCM);
            break;
        }
        else {
            LCM += 1;
        }
    }
}
