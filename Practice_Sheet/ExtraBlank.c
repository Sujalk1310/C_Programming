#include <stdio.h>
#include <string.h>
void main() {
    char string[50];
    printf("Enter a String : ");
    scanf("%[^\n]",string);
    while (string[0] == ' '){
        int C = 0;
        for (int i = 0; string[i] != '\0'; i++){
            string[i] = string[i+1];
            C += 1;
        }
        string[C] = '\0';
    }
    printf("%s",string);
}