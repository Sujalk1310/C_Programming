#include <stdio.h>
void main() {
    int Year,Cond;
    printf("Enter Year :\n");
    scanf("%d",&Year);
    Cond = 0;
    if ((Year % 4 == 0) &&( Year % 100 != 0)||(  Year % 400 == 0)){
        printf("leap");}}