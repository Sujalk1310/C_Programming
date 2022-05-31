#include <stdio.h>
void main() {
    int a[10],n,l,last,k;
    printf("Enter array size :\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        printf("Enter value of element at %d index :\n",i);
        scanf("%d",&a[i]);
    }
    printf("How many time you want to left shift ?\n");
    scanf("%d",&l);
    for (int i = 0; i < l; i++) {
        last = a[n-1];
        for (int j = n-1; j >= 0; j--) {
            if (j <= n-1) {
                a[j] = a[j-1];
            }
        }
        a[0] = last;
    }
    for (int i = 0; i < n; i++) {
        printf("%d,",a[i]);
    }
}