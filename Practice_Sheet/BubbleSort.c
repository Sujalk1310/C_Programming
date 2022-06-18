#include <stdio.h>
void main() {
    // 34.	 Bubble sort 
    int N;
    printf("Enter size of array : ");
    scanf("%d",&N);
    int arr[N];
    for (int i = 0; i < N; i++){
        printf("Enter value at index %d  : ",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N-1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++){
        printf("%d",arr[i]);
    }
}