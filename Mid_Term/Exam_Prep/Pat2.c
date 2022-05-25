#include <stdio.h>
void main() {
    int x,ji;
    printf("Enter No. :\n");
    scanf("%d",&x);
    for (int i = 1; i <= 1+x; i++){
        for (int j = 1;j <= i; j++){
            printf("%c ",' ');
            ji = j;
        }

        for (int k = x; k >ji; k--){
            printf("%c ",'*');
        }
        printf("\n");
    }
}