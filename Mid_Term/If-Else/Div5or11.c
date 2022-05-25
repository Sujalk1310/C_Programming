#include <stdio.h>
void main() {
    int a;
    printf("Enter No. :\n");
    scanf("%d",&a);
    if (a%5 == 0 && a%11 == 0){
        printf("It is Divisible by 5 and 11 Both");
    }
    else if (a%5 == 0){
        printf("It is Divisible by 5");
    }
    else if (a%11 == 0){
        printf("It is Divisible by 11");
    }
    else {
        printf("It is not divisible by both 5 or 11");
    }
}