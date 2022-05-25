#include <stdio.h>
void main() {
    int Year,Cond;
    printf("Enter Year :\n");
    scanf("%d",&Year);
    Cond = (Year%4==0 && Year%100!=0)?1:((Year%400==0)?1:0);
    (Cond == 1)?printf("Leap Year"):printf("Not Leap Year");
}