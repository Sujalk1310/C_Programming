#include <stdio.h>
#include <math.h>
void main() {
    float a,area;
    printf("Enter Equilateral Triangle Side :\n");
    scanf("%f",&a);
    area = (sqrt(3)/(float)4)*a*a;
    printf("Area : %.2f",area);
}