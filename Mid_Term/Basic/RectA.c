#include <stdio.h>
void main() {
    float l,w,a;
    printf("Enter Value of Length and Breadth:\n");
    scanf("%f%f",&l,&w);
    a = l*w;
    printf("Area (%.2f*%.2f) = %.2f",l,w,a);
}