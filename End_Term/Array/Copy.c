#include <stdio.h>
void main() {
    int n,arr1[10],arr2[10];
    printf("Enter Size of Array : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        printf("Enter value of element at %dth index : ",i);
        scanf("%d",&arr1[i]);
        arr2[i] = arr1[i]; 
    }
    for (int i = 0; i < n; i++){
        printf("Array 1 - %d, Array 2 - %d\n",arr1[i],arr2[i]);
    }
}