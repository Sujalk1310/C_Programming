#include <stdio.h>
void main() {
    int x,i = 1;
    printf("Enter the No. :\n");
    scanf("%d",&x);
    printf("\n");
    while (i <= x){
        if (i%2 == 0) {
            printf("%d",i);
            printf("\n");
        }
        i++;
    }
}