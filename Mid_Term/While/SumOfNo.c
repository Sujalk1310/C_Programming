#include <stdio.h>
void main() {
    int x,i = 1,Sum = 0;
    printf("Enter the No. :\n");
    scanf("%d",&x);
    while (i <= x){
        Sum += i;
        i++;
    }
    printf("%d",Sum);
} 