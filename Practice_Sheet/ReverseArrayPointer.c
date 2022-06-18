#include <stdio.h>
void main() {
    // 32.	Write a C program to find reverse of an array using pointer.
    int N;
    printf("Enter size of Array : ");
    scanf("%d",&N);
    int arr[N],*ptr = arr;
    for (int i = 0; i < N; i++) {
        printf("Enter the value of element at index %d : ",i);
        scanf("%d",&ptr[i]); // ptr+i
    }
    int arr2[N],*ptr2 = arr2,c = 0;
    for (int i = N-1; i >= 0; i--) {
        arr2[c] = *(ptr+i);
        c += 1;           
    }   
    for (int i = 0; i < N; i++) {
        printf("%d ",*(ptr2+i));           
    } 
}