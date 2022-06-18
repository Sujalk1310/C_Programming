#include <stdio.h>
#include <math.h>
void main() {
    // 19.  Write a C program to count frequency of digits in a given number. 
    //      How to find frequency of digits in a given number using loop in C programming. 
    //      Logic to find total occurrences of each digits in a given number in C program.
    int Num,arr[20],Cond = 1,C = 0,Org;
    printf("Enter No. : ");
    scanf("%d",&Num);
    Org = Num;
    int Len = log10(Num)+1;
    for (int i = 0; i < Len; i++){
        Cond = 1;
        int Last = Num%10;
        for (int i = 0;i < C; i++){
            if (arr[i] == Last){
                Cond = 0;
                break;
            }
        }
        if (Cond == 1){
            arr[C] = Last;
            C += 1;
        }
        Num /= 10;
    }
    for (int i = 0; i < C; i++){
        int Count = 0;
        Num = Org;
        for (int j = 0; j < Len; j++){
            int Digit = Num%10;
            if (Digit == arr[i]){
                Count += 1;
            }
            Num /= 10;
        }
        printf("%d : %d times\n",arr[i],Count);
        Org /= 10;
    }
}