#include <stdio.h>
void main() {
    float r,d,c,a;
    printf("Enter the value of radius :\n");
    scanf("%f",&r);
    d = 2*r;
    c = 2*(22/7)*r;
    a = (float)22/7*r*r;
    printf("Diameter = %.2f\nCircumference = %.2f\nArea = %.2f",d,c,a);
}