#include <stdio.h>
#include <string.h>
// Error
void main() {
    char String[50] = "",Cmp[50] = "",m;
    printf("Enter a String : ");
    scanf("%[^\n]",String);
    scanf("%c",&m);
    printf("Enter a Character : ");
    scanf("%[^\n]",Cmp);
    for (int i = strlen(String)-1; i >= 0; i--){
        char Cmp2[50] = "";
        int K = 0;
        for (int j = (i-strlen(Cmp)+1); j < strlen(Cmp); j--){
            Cmp2[K] = String[j];
            printf("%d\n",j);
            K += 1;
        }
        printf("%s",Cmp2);
        int Cond = strcmp(Cmp2,Cmp);
        if (Cond == 0) {
            printf("%d index",i);
            break;
        }
    }
}