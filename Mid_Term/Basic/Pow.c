#include <stdio.h>
void main() {
    int a,b,out = 1;
    printf("Enter Base Value :\n");
    scanf("%d",&a);
    printf("Enter Exponential Value :\n");
    scanf("%d",&b);
    for (int i = 0;i < b;i++) {
        out *= a;
    }
    printf("%d",out);
}