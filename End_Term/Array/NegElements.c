#include <stdio.h>
void main() {
    int n;
    printf("Enter size of array :\n");
    scanf("%d",&n);
    int a[10];
    for (int i = 0; i < n; i++) {
        printf("Enter value of element at %d index :\n",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i]<0) {
            printf("%d,",a[i]);
        }
    }
}