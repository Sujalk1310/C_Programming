#include <stdio.h>
void main() {
    int n,arr[10],k,Cond;
    printf("Enter Size of Array : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        printf("Enter value of element at %dth index : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Which type of sort ?\n1.Ascending\n2.Descending\n");
    scanf("%d",&Cond);
    if (Cond == 1){
        for (int j = 0; j < n; j++){
            for (int i = 0; i < n-1; i++){
                if (arr[i] > arr[i+1]){
                    k = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = k;
                }
            }
        }
    }
    else if (Cond == 2) {
        for (int j = 0; j < n; j++){
            for (int i = 0; i < n-1; i++){
                if (arr[i] < arr[i+1]){
                    k = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = k;
                }
            }
        }
    }
    else {
        printf("Invalid Selection");
    }
    for (int i = 0; i < n; i++){
        printf("%d,",arr[i]);
    }
}