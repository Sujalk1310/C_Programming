#include <stdio.h>
#include <string.h>
void main() {
    // Write a C program to count total number of vowels and consonants in a string.
    char String[50];
    int V = 0,C = 0;
    printf("Enter a String : ");
    scanf("%[^\n]",String);
    for (int i = 0; i < strlen(String); i++){
        if ((String[i]>=65 && String[i]<=90) || (String[i]>=97 && String[i]<=122)){
            if (String[i] == 'a' || String[i] == 'e' || String[i] == 'i' || String[i] == 'o' || String[i] == 'u' || String[i] == 'A' || String[i] == 'E' || String[i] == 'I' || String[i] == 'O' || String[i] == 'U'){
                V += 1;
            }
            else {
                C += 1;
            }
        }
    }
    printf("Vowels : %d\n",V);
    printf("Consonants : %d\n",C);
}