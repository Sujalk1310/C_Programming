#include <stdio.h>
void main() {
    int arr[10],n,elem;
    printf("Enter array size :\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        printf("Enter value of element at %d index",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++){
        int c = 0;
        if (arr[i] != elem){
            elem = arr[i];
            for (int j = 0; j < n; j++){
                if (elem == arr[j]){
                    c += 1;
                }
            }
            printf("%d : %d\n",elem,c);
        }
    }
}