#include <stdio.h>
void main() {
    int a,b,c;
    printf("Enter 1st Angle Value \n");
    scanf("%d",&a);
    printf("Enter 2nd Angle Value \n");
    scanf("%d",&b);
    c = 180-(a+b);
    printf("3rd Angle : %d",c);
}