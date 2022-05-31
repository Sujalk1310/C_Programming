#include <stdio.h>
void main() {
    int n,l,old,Tot = 0;
    printf("Enter No. :\n");
    scanf("%d",&n);
    old = n;
    while (n != 0){
        l = n%10;
        int sum = 1;
        for (int i = l; i>0;i--){
            sum *= i;
        }
        Tot += sum;
        n = n/10;
    }
    if (Tot==old){
        printf("Strong");
    }
}