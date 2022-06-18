#include <stdio.h>
int ArraySum(int arr[],int N) {
    int Sum = 0;
    for (int i = 0; i < N; i++){
        Sum += arr[i];
    }
    return Sum;
}
void main() {
    // 30.	Write a C program using function to read elements in an array and find the sum of array elements. 
    //      C program to find sum of elements of the array. How to add elements of an array using for loop in C programming. 
    //      Logic to find sum of array elements in C programming or using pointer.
    int N;
    printf("Enter a size of array : ");
    scanf("%d",&N);
    int arr[N];
    for (int i = 0; i < N; i++){
        printf("Enter value at index %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("%d",ArraySum(arr,N));
}