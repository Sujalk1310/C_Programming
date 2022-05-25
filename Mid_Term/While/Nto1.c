#include <stdio.h>
void main() {
    int x,i;
    printf("Enter the No. :\n");
    scanf("%d",&x);
    i = x;
    while (i > 0){
        printf("%d",i);
        printf("\n");
        i--;
    }
}