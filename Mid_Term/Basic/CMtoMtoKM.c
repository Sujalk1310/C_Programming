#include <stdio.h>
void main(){
    float cm,m,km;
    printf("Enter Length Value (in cm) :\n");
    scanf("%f",&cm);
    m = (float)cm/100;
    km = (float)cm/(100*1000);
    printf("Meter = %.2f\nKiloMeter = %f",m,km);
}