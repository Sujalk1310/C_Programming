#include <stdio.h>
void main() {
    int arr[10]={1,2,3,4},pos,value,n;
    printf("Enter No. of elements you want to insert : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        printf("Enter the value you want to insert : ");
        scanf("%d",&value);
        printf("Enter the index on which you want to insert value %d : ",value);
        scanf("%d",&pos);
        int c = 0;
        for (int i = 0; i < 10; i++) {
            if (arr[i] != 0){
                c += 1;
            }
        }
        if (pos < 10 && c != 10){
            for (int i = 9; i >= pos; i--) {
                arr[i] = arr[i-1];
            }
            arr[pos] = value;
        }
        else {
            printf("Cannot Insert Element\n");
            break;
        }
        
    }
    for (int i = 0; i <10 ; i++){
        printf("%d,",arr[i]);
    }
}