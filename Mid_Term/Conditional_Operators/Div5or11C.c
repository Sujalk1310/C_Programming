#include <stdio.h>
void main() {
    int a;
    printf("Enter No. :\n");
    scanf("%d",&a);
    (a%5==0 && a%11==0)?printf("It is Divisible by 5 and 11 Both"):((a%5==0)?printf("It is Divisible by 5"):((a%11==0)?printf("It is Divisible by 11"):printf("It is not Divisible by both 5 and 11")));
}