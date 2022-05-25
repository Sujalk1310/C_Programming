#include <stdio.h>
void main() {
    char OP;
    int a,b;
    printf("What operation do you want to perform ?\n");
    scanf("%c",&OP);
    printf("Enter 1st No. :\n");
    scanf("%d",&a);
    printf("Enter 2nd No. :\n");
    scanf("%d",&b);
    switch (OP){
        case '+' :
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%d",a/b);   
            break; 
    }
}