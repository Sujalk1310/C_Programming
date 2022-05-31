#include <stdio.h>
void main() {
    int n;
    printf("Enter No. :\n");
    scanf("%d",&n);
    for (int i = 0; i < n/2; i++){
        for (int j = (n/2)-i; j > 0; j--){
            printf("  ");
        }
        for (int k = 0; k <= (2*i); k++){
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 0; i <= n/2; i++){
        for (int j = 0; j < i; j++){
            printf("  ");
        }
        for (int k = n-(2*i); k > 0; k--){
            printf("* ");
        }
        printf("\n");
    }
}