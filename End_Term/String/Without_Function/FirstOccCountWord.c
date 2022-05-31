#include <stdio.h>
#include <string.h>
void main() {
    char String[50] = "",Cmp[50] = "",m;
    printf("Enter a String : ");
    scanf("%[^\n]",String);
    scanf("%c",&m);
    printf("Enter a Character : ");
    scanf("%[^\n]",Cmp);
    for (int i = 0; i < strlen(String); i++){
        char Cmp2[50] = "";
        int K = 0;
        for (int j = i; j < (strlen(Cmp)+i); j++){
            Cmp2[K] = String[j];
            K += 1;
        }
        int Cond = strcmp(Cmp2,Cmp);
        if (Cond == 0) {
            printf("%d index",i);
            break;
        }
    }
}