#include <stdio.h>
void main() {
    float C,F;
    printf("Enter Temperature (Far) :\n");
    scanf("%f",&F);
    C = (F-32)*((float)5/9);
    printf("Farheneit = %.2f",C);
}