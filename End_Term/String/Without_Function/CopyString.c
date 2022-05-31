#include <stdio.h>
#include <string.h>
void main() {
    // Write a C program to copy one string to another string without function.
    char String[20],StrCpy[20];
    int C = 0;
    printf("Enter String : ");
    scanf("%[^\n]",String);
    printf("String : %s\n",String);
    for (int i = 0; String[i] != '\0'; i++){
        StrCpy[i] = String[i];
        C += 1;
    }
    StrCpy[C] = '\0'; // Here it is necessary to add '\0'...
    printf("Copied String : %s",StrCpy);
}