#include <stdio.h>
void main() {
    int n1 = 0,n2 = 1,n3,x;
    printf("Enter No. :\n");
    scanf("%d",&x);
    printf("%d ",n1);
    printf("%d ",n2);
    while (x != 2){
        n3 = n1+n2;
        printf("%d ",n3);
        n1 = n2;
        n2 = n3;
        x--;
    }
}