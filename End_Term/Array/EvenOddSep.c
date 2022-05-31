#include <stdio.h>
void main() {
    int n,arr[10],arreven[10],arrodd[10],arrevenpos = 0,arroddpos = 0;
    printf("Enter Size of Array : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        printf("Enter value of element at %dth index : ",i);
        scanf("%d",&arr[i]);
        if (arr[i]%2==0){
            arreven[arrevenpos] = arr[i];
            arrevenpos += 1;
        }
        else {
            arrodd[arroddpos] = arr[i];
            arroddpos += 1;
        }
    }
    printf("Even Array\n");
    for (int i = 0; i < arrevenpos; i++){
        printf("%d,",arreven[i]);
    }
    printf("\nOdd Array\n");
    for (int i = 0; i < arroddpos; i++){
        printf("%d,",arrodd[i]);
    }
}