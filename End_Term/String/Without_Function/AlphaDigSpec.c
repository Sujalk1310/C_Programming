#include <stdio.h>
void main() {
    // Write a C program to find total number of alphabets, digits or special character in a string.
    char String[50];
    int A = 0,D = 0,S = 0;
    printf("Input a String : ");
    scanf("%[^\n]",String);
    for (int i = 0; String[i] != '\0'; i++){
        if ((String[i]>=65 && String[i]<=90) || (String[i]>=97 && String[i]<=122)){
            A += 1;
        }
        else if (String[i]>=48 && String[i]<=57){
            D += 1;
        }
        else if (String[i] != ' '){
            S += 1;
        }
    }
    printf("Alphabets : %d\n",A);
    printf("Digits : %d\n",D);
    printf("Special Character : %d\n",S);
}