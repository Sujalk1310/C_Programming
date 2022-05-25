#include <stdio.h>
void main() {
    float a,b,Add,Sub,Mul,Div;
    printf("Enter Value for A :\n");
    scanf("%f",&a);
    printf("Enter Value for B :\n");
    scanf("%f",&b);
    Add = a+b;
    Sub = a-b;
    Mul = a*b;
    Div = a/b;
    printf("%.0f + %.0f = %.0f \n",a,b,Add);
    printf("%.0f - %.0f = %.0f \n",a,b,Sub);
    printf("%.0f * %.0f = %.0f \n",a,b,Mul);
    printf("%.0f / %.0f = %.2f \n",a,b,Div);
}