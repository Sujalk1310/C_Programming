#include <stdio.h>
void main() {
    char String[50];
    int C = 0,W = 0,L = 0,S = 0;
    printf("Input a String : ");
    scanf("%[^\n]",String);
    for (int i = 0; String[i] != '\0'; i++){
        if (String[i] >= 65 && String[i] <= 90){
            C += 1;
        } 
        else if (String[i] >= 97 && String[i] <= 122){
            L += 1;
        }
        else if (String[i] == ' '){
            W += 1;
        }
        else {
            S += 1;
        }
    }
    printf("Capital Letters : %d\n",C);
    printf("Small Letters : %d\n",L);
    printf("Whitespaces : %d\n",W);
    printf("Special Characters : %d\n",S);
}