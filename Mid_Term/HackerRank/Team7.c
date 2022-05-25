#include <stdio.h>
int main() {
    int n,P,V,T,c = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%d %d %d",&P,&V,&T);
        if (P+V+T >= 2){
            c += 1;
        }
    }
    printf("%d",c);
    return 0;
}
