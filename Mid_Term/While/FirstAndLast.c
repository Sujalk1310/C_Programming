#include <stdio.h>
void main() {
    int x;
    printf("Enter the No. :\n");
    scanf("%d",&x);
    printf("%d",x%10);
    while (x/10 != 0){
        x = x/10;
    }
    printf("%d",x%10);
}