#include <stdio.h>
#include <math.h>
int Armstrong(int Num){
    int Len = log10(Num)+1,Sum = 0,Org = Num;
    while (Num > 0){
        int Last = Num%10,Pow = 1;
        for (int i = 0; i < Len; i++){
            Pow *= Last;
        }
        Sum += Pow;
        Num /= 10;
    }
    if (Org == Sum){
        return 1;
    }
    return 0;
}
void main() {
    // 25.	Write a C program using function to print all Armstrong numbers between 1 to n. 
    //      How to print Armstrong numbers between given interval using loop in C program. 
    //      Logic to print Armstrong numbers in given range in C programming.
    int N;
    printf("Enter (to the) value : ");
    scanf("%d",&N);
    for (int i = 1; i <= N; i++){
        if (Armstrong(i)){
            printf("%d, ",i); 
        }
    }
    printf("Are Armstrong No's.");
}