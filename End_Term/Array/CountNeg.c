#include <stdio.h>
void main() {
    int n,neg = 0;
    printf("Enter size of array :\n");
    scanf("%d",&n);
    int a[10];
    for (int i = 0; i < n; i++) {
        printf("Enter value of element at %d index :\n",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i]<0) {
            neg += 1;
        }
    }
    printf("No. of Negative Elements : %d",neg);
}