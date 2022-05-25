#include <stdio.h>
#include <math.h>
void main() {
    float a,b,c,s,ar;
    printf("Enter side a length :\n");
    scanf("%f",&a);
    printf("Enter side b length :\n");
    scanf("%f",&b);
    printf("Enter side c length :\n");
    scanf("%f",&c);
    s = (a+b+c)/2;
    ar = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area : %.2f",ar);
}