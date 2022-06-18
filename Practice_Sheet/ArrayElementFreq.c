#include <stdio.h>
void main() {
    // 31.	Write a C program using function to input elements in array and find frequency of each element in array. 
    //      How to count occurrence of each element in array in C programming using loop. 
    //      Logic to count frequency of each element in array in C program or using pointer
    int N,C = 0;
    printf("Enter size of array : ");
    scanf("%d",&N);
    int arr[N],arr2[N];
    for (int i = 0; i < N; i++){
        printf("Enter element value at index %d : ",i);
        scanf("%d",&arr[i]);
        int Cond = 1;
        for (int j = 0; j < C; j++){
            if (arr[i] == arr2[j]){
                Cond = 0;
                break;
            }
        }
        if (Cond == 1){
            arr2[C] = arr[i];
            C += 1;
        }
    }
    for (int i = 0; i < C; i++){
        int Count = 0;
        for (int j = 0; j < N; j++){
            if (arr2[i] == arr[j]){
                Count += 1;
            }
        }
        printf("%d : %d times\n",arr2[i],Count);
    }
}