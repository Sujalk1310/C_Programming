#include<stdio.h>
void main(){
    // Write a C program to toggle case of each character of a string.
    char a[50];
    scanf("%[^\n]",a);
    for(int i=0;a[i];i++){
        if(a[i]>65 && a[i]<90){
            a[i] += 32;
        }
        else if(a[i]>90 && a[i]<122){
            a[i] -= 32;
        }
    }

    for(int i=0;a[i];i++){
        printf("%c",a[i]);
    } 
}
