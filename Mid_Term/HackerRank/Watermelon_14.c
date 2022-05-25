#include <stdio.h>
int main() {
    int w,cond = 1;
    scanf("%d",&w);
    for (int i = 1; i < w; i++){
        if (i%2==0 && (w-i)%2==0){
            printf("YES");
            cond = 1;
            break;
        }
        else {
            cond = 0;
        }
    }
    if (cond == 0){
    printf("NO");
    }
    return 0;
}
