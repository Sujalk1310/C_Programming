#include <stdio.h>
void main() {
    float P,R,T,SI;
    printf("Enter Principal Amount :\n");
    scanf("%f",&P);
    printf("Enter Rate of Interest :\n");
    scanf("%f",&R);
    printf("Enter Tenure :\n");
    scanf("%f",&T);
    SI = (P*R*T)/100;
    printf("Simple Interest : %.2f",SI);
}