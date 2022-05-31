#include <stdio.h>
void main() {
    long long int a,last = -1,new,c = 0,m = 0;
    printf("Enter No :\n");
    scanf("%lld",&a);
    while (a != 0){
        new = a%10;
        if (last == new){
            m += 1;
            if (m == 3){
                c += 1;
                m = 0;
            }
        }
        else {
            last = new;
            m = 0;
        }
        a /= 10;
    }
    printf("Total No. of 4 0's and 1's : %lld",c);
    
}