#include <stdio.h>
void main() {
    int n,max;
    printf("Enter Size of Array : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        printf("Enter value for %dth index : ",i);
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for (int i = 0; i < n; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    max++;
    int b[100] = {0};
    for (int i = 0; i < n; i++){
        b[arr[i]]++;
    }
    for (int i = 0; i < max; i++){
        if (b[i] > 1){
            printf("%d\n",b[i]);
        }
    }
}