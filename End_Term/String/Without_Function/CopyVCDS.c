#include <stdio.h>
#include <string.h>
void main() {
    // WAP to input a string and copy all the vowels , consonants , digits and special characters in 4 different strings then display those 4 strings. 
    char String[50],Vowel[50],Consonant[50],Digit[50],Special[50];
    int V = 0,C = 0,D = 0,S = 0;
    printf("Enter a String : ");
    scanf("%[^\n]",String);
    for (int i = 0; i < strlen(String); i++){
        if ((String[i]>=65 && String[i]<=90) || (String[i]>=97 && String[i]<=122)){
            if (String[i] == 'a' || String[i] == 'e' || String[i] == 'i' || String[i] == 'o' || String[i] == 'u' || String[i] == 'A' || String[i] == 'E' || String[i] == 'I' || String[i] == 'O' || String[i] == 'U'){
                Vowel[V] = String[i];
                V += 1;
            }
            else {
                Consonant[C] = String[i];
                C += 1;
            }
        }
        else if (String[i]>=48 && String[i]<=57){
            Digit[D] = String[i];
            D += 1;
        }
        else if (String[i] != ' '){
            Special[S] = String[i];
            S += 1;
        }
    }
    Vowel[V] = '\0';
    Consonant[C] = '\0';
    Digit[D] = '\0';
    Special[S] = '\0';
    printf("Vowels : %s\n",Vowel);
    printf("Consonants : %s\n",Consonant);
    printf("Digits : %s\n",Digit);
    printf("Special Characters : %s\n",Special);
}