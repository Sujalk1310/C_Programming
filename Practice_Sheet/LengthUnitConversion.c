#include <stdio.h>
void main() {
    // 4.	Write a C program to input length in centimeter and convert it to meter and kilometer. 
    //      How to convert length from centimeter to meter and kilometer in C programming. 
    //      Length conversion program in C from centimeter to meter and centimeter to kilometer.
    float cm,m,km;
    printf("Enter Length in Centimeters : ");
    scanf("%f",&cm);
    m = cm/100;
    km = m/1000;
    printf("Meters : %.2f\n",m);
    printf("Kilometers : %.2f\n",km);
}