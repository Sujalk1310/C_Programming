#include <stdio.h>
void main() {
    char a[5][10]={"Hi","Hello","GLA","Bye","first"};
    for (int i = 0; i < 5; i++){
        printf("%s\n",a[i]);
    }
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 10; j++){
            printf("%c\n",a[i][j]);
        }
    }
}