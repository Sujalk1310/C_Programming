#include <stdio.h>
void main() {
    float P,R,T,CI;
    printf("Enter Principal Amount :\n");
    scanf("%f",&P);
    printf("Enter Rate of Interest :\n");
    scanf("%f",&R);
    printf("Enter Tenure :\n");
    scanf("%f",&T);
    CI = 1;
    for (int i = 0; i < T; i++) {
        CI *= (1+(R/100));
    }
    CI *= P;
    CI -= P;
    printf("Compound Interest : %.2f",CI);
}