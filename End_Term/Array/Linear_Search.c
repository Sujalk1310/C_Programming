#include <stdio.h>
void main() {
    int a[10],n,key,cond = 0,pos;
    printf("Enter size of the array :\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        printf("Enter element value for %d index :\n",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the key :\n");
    scanf("%d",&key);
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            cond = 1;
            pos = i;
            break;
        }
    }
    if (cond == 1) {
        printf("Element Exist at %d index",pos);
    }
    else {
        printf("Element Does Not Exist");
    }
}