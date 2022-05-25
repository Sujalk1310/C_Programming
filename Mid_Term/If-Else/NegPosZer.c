#include <stdio.h>
void main() {
    int a;
    printf("Enter No. :\n");
    scanf("%d",&a);
    if (a < 0){
        printf("Negative");
    }
    else if (a == 0){
        printf("Zero");
    }
    else {
        printf("Positive");
    }
}