#include <stdio.h>
#include <string.h>
void main() {
    // Write a C program to copy one string to another string with function.
    char String[20],StrCpy[20];
    printf("Enter String : ");
    scanf("%[^\n]",String);
    strcpy(StrCpy,String);
    printf("Copied String : %s",StrCpy);
}