#include <stdio.h>
void main() {
    int n,arr[10],sum = 0;
    printf("Enter Size of Array : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        printf("Enter value of element at %dth index : ",i);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("Sum of all elements of array : %d",sum);
}