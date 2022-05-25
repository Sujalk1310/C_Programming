#include <stdio.h>
void main() {
    int x,i = 1;
    printf("Enter the No. :\n");
    scanf("%d",&x);
    while (i <= x){
        printf("%d",i);
        printf("\n");
        i++;
    }
}