#include <stdio.h>
void main() {
    int x,n,in,sum = 0,mul = 1,c=0;
    printf("Enter No. :\n");
    scanf("%d",&x);
    in = x;
    while (x !=  0){
        c += 1;
        x /= 10;
    }
    x = in;
    while (c != 1){
        mul *= 10;
        c--;
    }
    while (x!=0){
        n = x%10;
        sum += n*mul; 
        mul /= 10;
        x /= 10;
    }
    if (sum == in) {
        printf("Palindrome");
    }
}