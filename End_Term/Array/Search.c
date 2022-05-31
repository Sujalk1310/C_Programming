#include <stdio.h>
void main() {
    int n,arr[10],search;
    printf("Enter Size of Array : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        printf("Enter value of element at %dth index : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter Value you want to search : ");
    scanf("%d",&search);
    for (int i = 0; i < n; i++){
        if (arr[i] == search){
            printf("Element Found at %d index\n",i);
        }
    }
}