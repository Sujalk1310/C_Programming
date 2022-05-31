#include <stdio.h>
void main() {
    long long int a,x,y,sum,Cond = 1;
    printf("Enter No. :\n");
    scanf("%d",&a);
    while (1){
        while (a > 10){
            x = a%10;
            a /= 10;
            printf("a = %d\n",a);
            y = a%10;
            printf("x = %d y = %d\n",x,y);
            if (x > y){
                sum = x-y;
            }
            else {
                sum = y-x;
            }
            printf("Sum = %d\n",sum);
            if (sum != 1){
                Cond = 0;
                break;
            } 
        }
        break;
    }
    if (Cond == 1){
        printf("YES");
    }
    else {
        printf("NO");
    }
}