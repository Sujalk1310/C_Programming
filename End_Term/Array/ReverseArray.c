#include <stdio.h>
void main() {
    int arr[10],n;
    printf("Enter Size of Array : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        printf("Enter Element Value at %dth index : ",i);
        scanf("%d",&arr[i]);
    }
    for (int i = n-1; i >= 0; i--){
        printf("%d,",arr[i]);
    }
}