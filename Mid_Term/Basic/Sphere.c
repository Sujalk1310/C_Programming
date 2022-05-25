#include <stdio.h>
void main() {
    float r,ar;
    printf("Enter Radius Value :\n");
    scanf("%f",&r);
    ar = ((float)4/3)*((float)22/7)*r*r*r;
    printf("Area : %.2f",ar);
}