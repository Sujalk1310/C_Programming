#include <stdio.h>
void main() {
    int x;
    printf("Enter No. :\n");
    scanf("%d",&x);
    for (int i = 2; i <= x; i++){
        int Cond = 1;
        for (int j = 2; j < i; j++){
            if ( i % j == 0 ){
                Cond = 0;
                break;
            }
        }
        if (Cond == 1){
            printf("%d\n",i);
        }
    }
}