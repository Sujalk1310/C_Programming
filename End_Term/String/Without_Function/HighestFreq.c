#include <stdio.h>
#include <string.h>
void main() {
    char str[50],C,CF;
    int Freq = 0,OldFreq = -1,k,j = 0;
    printf("Enter a String :\n");
    scanf("%[^\n]",str);
    strlwr(str);
    C = str[0];
    while (1){
        Freq = 0;
        for (int i = 0; i < strlen(str); i++){
            if (str[i] == C){
                Freq += 1;
                k = i;
            }
        }
        if (Freq > OldFreq){
            OldFreq = Freq;
            CF = str[k];
        }
        if (j < strlen(str)-1){
            j += 1;
            C = str[j];
        }
        else {
            break;
        }
    }
    printf("Highest : %c Repeated : %d times",CF,OldFreq);
}