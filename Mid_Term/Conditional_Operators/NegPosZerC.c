#include <stdio.h>
void main() {
    int a;
    printf("Enter No. :\n");
    scanf("%d",&a);
    (a<=0)?((a==0)?printf("Zero"):printf("Negative")):printf("Positive");
}