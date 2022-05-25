#include <stdio.h>
void main() {
    float l,w,p;
    printf("Enter Value of Length and Breadth:\n");
    scanf("%f%f",&l,&w);
    p = 2*(l+w);
    printf("Perimeter (2(%.2f+%.2f)) = %.2f",l,w,p);
}