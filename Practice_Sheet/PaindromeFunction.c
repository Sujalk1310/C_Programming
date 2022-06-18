#include <stdio.h>
#include <math.h>
int Reverse(int Num){
    int Len = log10(Num)+1,Mul = pow(10,Len),Rev_Num = 0,Last;
    for (int i = 0; i < Len; i++){
        Mul /= 10;
        Last = Num%10;
        printf("%d\n",Last);
        Rev_Num += Last*Mul;
        printf("%d\n",Rev_Num);
        Num /= 10;
    }
    return Rev_Num;
}
int Palindrome(int Num){
    int Rev = Reverse(Num);
    printf("%d\n",Rev);
    if (Rev == Num){
        return 1;
    }
    else {
        return 0;
    }
}
void main() {
    // 18.	Write a C program using function to input number from user and check number is palindrome or not using loop. 
    //      How to check whether a number is palindrome or not using loop in C programming. 
    //      Logic to check palindrome number in C programming.
    int Num; 
    printf("Enter No. : ");
    scanf("%d",&Num);
    if (Palindrome(Num)){
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }
}