#include <stdio.h>
void main() {
    int x,first,last,sum;
    printf("Enter No. :\n");
    scanf("%d",&x);
    last = x%10;
    while (x != 0){
        first = x;
        x /= 10;
    }  
    sum = first+last;
    printf("%d",sum);
}