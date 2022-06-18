#include <stdio.h>
void main() {
    // 1.	Write a C program to input temperature in Centigrade and convert to Fahrenheit. 
    //      How to convert temperature from degree centigrade to degree Fahrenheit in C programming. 
    //      Logic to convert temperature from Celsius to Fahrenheit in C.
    float C,F;
    printf("Enter the Temperature in Celsius : ");
    scanf("%f",&C);
    F = ((float)9/5)*C+32;
    printf("Temperature in Fahrenheit : %.2f",F);
}