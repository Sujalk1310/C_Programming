#include <stdio.h>
void main() {
    int n = 0,n1 = 0,n2 = 1,n3,numcheck;
    printf("Enter No. :\n");
    scanf("%d",&numcheck);
    while (1){
        if (n1 == numcheck || n2 == numcheck || n3 == numcheck){
            printf("Yes it is");
            break;
        }
        else if (numcheck < n3) {
            printf("No Sir");
            break;
        }
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
}