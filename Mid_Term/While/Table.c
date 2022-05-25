#include <stdio.h>
void main() {
    int x,i = 1;
    printf("Enter the No. :\n");
    scanf("%d",&x);
    while (i <= 10){
        printf ("%d x %d = %d\n",x,i,x*i);
        i++;
    }
}