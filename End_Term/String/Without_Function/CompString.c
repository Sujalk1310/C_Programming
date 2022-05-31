#include <stdio.h>
#include <string.h>
void main() {
    // Write a C program to compare two strings without function
    char String[20],String2[20];
    int f=0,i = 0,c1 = 0,c2 = 0;
    printf("Enter String 1 Value : ");
    scanf("%[^\n]",String);
    char k;
    scanf("%c",&k);
    printf("Enter String 2 Value : ");
    scanf("%[^\n]",String2);
    while (c1 != strlen(String)+1 && c2 != strlen(String2)+1) {   
        if (String[i] == String2[i]){
            i+=1;
            c1+=1;
            c2+=1;
        }
        else if (String[i] > String2[i]) {
            printf("%s is greater than %s",String,String2);
            break;
        }
        else {
            printf("%s is greater than %s",String2,String);
            break;
        }
    }
    if (c1 == strlen(String)+1 && c2 == strlen(String2)+1){
        printf("%s is equal to %s",String,String2);
    }
}
