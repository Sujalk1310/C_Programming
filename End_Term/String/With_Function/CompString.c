#include <stdio.h>
#include <string.h>
void main() {
    // Write a C program to compare two strings with function
    char String[20],String2[20];
    printf("Enter String 1 Value : ");
    scanf("%[^\n]",String);
    char k;
    scanf("%c",&k);
    printf("Enter String 2 Value : ");
    scanf("%[^\n]",String2);
    int f = strcmp(String,String2);
    if (f==0){
        printf("Strings are Equal");
    }
    else if (f > 0){
        printf("%s is greater",String);
    }
    else {
        printf("%s is greater",String2);
    }
}