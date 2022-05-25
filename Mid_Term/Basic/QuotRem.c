#include <stdio.h>
void main() {
    float a,b,Q,R;
    printf("Enter Dividend Value :\n");
    scanf("%f",&a);
    printf("Enter Divisor Value :\n");
    scanf("%f",&b);
    Q = 0;
    R = 0;
    while (1) {
        if (a >= b) {
            a -= b;
            Q += 1;
            R = a;
        }
        else {
            break;
        }
    }
    printf("Quotient : %.2f\nRemainder : %.2f",Q,R);
}