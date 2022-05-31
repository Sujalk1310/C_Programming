#include <stdio.h>
void main() {
    int Even = 0,Odd = 0,n,arr[10];
    printf("Enter No. of Elements :\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        printf("Enter value of element for %dth index : ",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++){
        if (arr[i]%2 == 0){
            Even += 1;
        }
        else {
            Odd += 1;
        }
    }
    printf("Even : %d\nOdd : %d",Even,Odd);
}