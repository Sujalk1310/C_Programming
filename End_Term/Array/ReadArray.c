#include <stdio.h>
void main() {
    int n,arr[10];
    printf("Enter Size of Array : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        printf("Enter value of element at %dth index : ",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++){
        printf("Element at %dth index : %d\n",i,arr[i]);
    } 
}