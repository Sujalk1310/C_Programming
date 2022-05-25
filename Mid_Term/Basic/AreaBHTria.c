#include <stdio.h>
void main() {
    float h,b,a;
    printf("Enter Height Value :\n");
    scanf("%f",&h);
    printf("Enter Base Value :\n");
    scanf("%f",&b);
    a = ((float)1/2)*b*h;
    printf("Area : %.2f",a);
}