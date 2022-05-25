#include <stdio.h>
void main() {
    int a,b,c;
    printf("Enter 1st No. :\n");
    scanf("%d",&a);
    printf("Enter 2nd No. :\n");
    scanf("%d",&b);
    a = a^b; //  c = a;  a = a+b;
    b = a^b; //  a = b;  b = a-b;
    a = a^b; //  b = c;  a = a-b;
    printf("After Swap\n1st No : %d\n2nd No : %d",a,b);
}