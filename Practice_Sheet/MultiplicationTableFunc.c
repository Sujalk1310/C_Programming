#include <stdio.h>
void Table(int Num){
    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n",Num,i,Num*i);
    }
}
void main() {
    //17.	Write a C program using function to input a number from user and print multiplication table of the given number using for loop. 
    //      How to print multiplication table of a given number in C programming. 
    //      Logic to print multiplication table of any given number in C program.
    int Num;
    printf("Enter No. : ");
    scanf("%d",&Num);
    Table(Num);
}