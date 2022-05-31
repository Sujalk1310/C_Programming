#include <stdio.h>
void main() {
    int a[10],n,l,first;
    printf("Enter array size :\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        printf("Enter value of element at %d index :\n",i);
        scanf("%d",&a[i]);
    }
    printf("How many time you want to left shift ?\n");
    scanf("%d",&l);
    for (int i = 0; i < l; i++) {
        first = a[0];
        for (int j = 0; j < n; j++) {
            if (j >= 1) {
                a[j-1] = a[j];
            }
        }
        a[n-1] = first;
    }
    for (int i = 0; i < n; i++) {
        printf("%d,",a[i]);
    }
}