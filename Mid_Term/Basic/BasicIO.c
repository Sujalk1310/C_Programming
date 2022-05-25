#include <stdio.h>
void main() {
    int a;
    float b;
    char c;
    printf("Enter Ineteger :\n");
    scanf("%d",&a);
    printf("Enter Float :\n");
    scanf("%f",&b);
    printf("Enter Character :\n");
    scanf(" %c",&c);
    printf("int : %d\nfloat : %f\nchar : %c",a,b,c);
}