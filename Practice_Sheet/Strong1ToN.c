#include <stdio.h>
int Strong(int Num){
    int Org = Num,Sum = 0;
    while (Num > 0){
        int Fact = 1;
        int Last = Num%10;
        for (int i = 1; i <= Last; i++){
            Fact *= i;
        }
        Sum += Fact;
        Num /= 10;
    } 
    if (Org == Sum){
        return 1;
    }
    return 0;
}
void main() {
    // 27.  Write a C program using function to print Strong numbers between 1 to n. 
    //      C program to print all strong numbers between a given range. 
    //      Logic to print strong numbers in a given range in C program.
    int N;
    printf("Enter a No. : ");
    scanf("%d",&N);
    for (int i = 1; i <= N; i++){    
        if (Strong(i)){
            printf("%d, ",i);
        }
    }
    printf("Are Perfect No's.");
}