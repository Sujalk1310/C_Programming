#include <stdio.h>
void main() {
    int n,arr[10],pos;
    printf("Enter Size of Array : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        printf("Enter value of element at %dth index : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Which index : ");
    scanf("%d",&pos);
    for (int i = pos; i < n; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = 0;
    for (int i = 0; i < n; i++){
        printf("%d,",arr[i]);
    }
}