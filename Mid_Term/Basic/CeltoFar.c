#include <stdio.h>
void main() {
    float C,F;
    printf("Enter Temperature (Cel) :\n");
    scanf("%f",&C);
    F = ((float)9/5*C)+32;
    printf("Farheneit = %.2f",F);
}