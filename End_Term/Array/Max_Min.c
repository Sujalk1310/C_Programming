#include <stdio.h>
void main() {
    int arr[10]={1,2,3,4,5,6},min = arr[0],max = arr[0];
    for (int i = 0; i < 10; i++) {
        if (arr[i] > max){
            max = arr[i];
        }
        if (arr[i] < min && arr[i] != 0){
            min = arr[i];
        }
    }
    printf("Minimum Value : %d\nMaximum Value : %d\n",min,max);
}