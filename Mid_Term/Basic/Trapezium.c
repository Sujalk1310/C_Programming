#include <stdio.h>
void main() {
    float a,b,h,ar;
    printf("Enter parallel side a length :\n");
    scanf("%f",&a);
    printf("Enter parallel side b length :\n");
    scanf("%f",&b);
    printf("Enter height h length :\n");
    scanf("%f",&h);
    ar = ((a+b)/2)*h;
    printf("Area : %.2f",ar);
}