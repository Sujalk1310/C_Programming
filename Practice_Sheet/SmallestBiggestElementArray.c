#include <stdio.h>
void main() {
    // 29.	Write a C program   to input elements in an array from user, find maximum and minimum element in array. 
    //      C program to find biggest and smallest elements in an array. 
    //      Logic to find maximum and minimum element in array in C programming or using pointer.
    int N;
    printf("Enter a size of array : ");
    scanf("%d",&N);
    int arr[N];
    for (int i = 0; i < N; i++){
        printf("Enter value of array at index %d : ",i);
        scanf("%d",&arr[i]);
    }
    int Max = 0,Min;
    for (int i = 0; i < N; i++){
        if (arr[i] < Min){
            Min = arr[i];
        }
        if (arr[i] > Max){
            Max = arr[i];
        }
    }
    printf("Maximum : %d\nMinimum : %d\n",Max,Min);
}