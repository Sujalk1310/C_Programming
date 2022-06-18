#include <stdio.h>
void main() {
    // 6.	Write a C program to input any number from user and find highest order set bit of given number using bitwise operator. 
    //      How to find the highest order of the set bit of a given number using bitwise operator in C programming? 
    //      Logic to get highest order set bit of a number in C programming.
    int Num,HBit,Order = -1;
    printf("Enter the No. : ");
    scanf("%d",&Num);
    for (int i = 0; i < sizeof(int)*8; i++){
        if ((Num>>i)&1){
            Order = i;
        }
    }
    if (Order != -1){
        printf("The Highest Bit Order is %d",Order);
    }
    else {
        printf("0 doesn't have Highest Bit Order");
    }
}