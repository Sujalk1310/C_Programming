#include <stdio.h>
void main() {
    int a,b;
    printf("Enter value of A :\n");
    scanf("%d",&a);
    printf("Enter value of B :\n");
    scanf("%d",&b);
    printf("Minimum No : ");
    if (a<b){
        printf("%d",a);
    }
    else {
        printf("%d",b);
    }
}
