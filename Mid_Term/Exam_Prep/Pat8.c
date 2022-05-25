#include <stdio.h>
void main() {
    char a='A';char b='A';
    for (int i = 0; i < 5; i++){
        b=a;
        for (int j = 0; j < 5; j++){
            if(j>=i){
                printf("%c",a);
                a++;
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
        a=++b;
    }
}