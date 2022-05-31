#include <stdio.h>
void main() {
    char String[50];
    int CC = 0,VC = 0,CL = 0,VL = 0;
    printf("Input a String : ");
    scanf("%[^\n]",String);
    for (int i = 0; String[i] != '\0'; i++){
        if (String[i] >= 65 && String[i] <= 90){
            if (String[i]=='A' || String[i]=='E' || String[i]=='I' || String[i]=='O' || String[i]=='U'){
                VC += 1;
            }
            else {
                CC += 1;
            }
        }
        else if (String[i] >= 97 && String[i] <= 122){
            if (String[i]=='a' || String[i]=='e' || String[i]=='i' || String[i]=='o' || String[i]=='u'){
                VL += 1;
            }
            else {
                CL += 1;
            }
        }
    }
    printf("Capital Vowels : %d\n",VC);
    printf("Capital Consonants : %d\n",CC);
    printf("Small Vowels : %d\n",VL);
    printf("Small Consonants : %d\n",CL);
}