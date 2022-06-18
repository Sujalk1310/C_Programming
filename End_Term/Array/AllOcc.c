#include <stdio.h>
void main() {
    int arr[]={1,2,2,2,3,5,6,2,2},num = 2,c=0,cond = 0;;
    for (int i = 0; i < 9;i++){
        if (arr[i]==num){
            c += 1;
        }
    }
    for (int i = 0; i < c; i++){
        for (int j = 0; j < 9; j++){
            if (num==arr[j]){
                cond = 1;
            }
            if(cond){
                arr[j] = arr[j+1];
            }
        }
        cond = 0;
        arr[8]= 0;
    }
    for (int i = 0; i < 9; i++){
        printf("%d ",arr[i]);
    }
}