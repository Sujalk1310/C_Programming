#include <stdio.h>
void main() {
    int x,sum = 0,n,in,c = 0,no;
    printf("Enter No. :\n");
    scanf("%d",&x);
    in = x;
    while (x !=  0){
        c += 1;
        x /= 10;
    }
    x = in;
    while ( x != 0){
        n = x%10;
        no = 1;
        for (int i = 0; i < c; i++){
            n *= no;
        }
        sum += n;
        x = x/10;
    }
    if (sum == in){
        printf("Armstrong No.");
    }
}