#include <stdio.h>
void main() {
    // 2.	Write a C program to input number of days from user and convert it to years, weeks and days. 
    //      How to convert days to years, weeks in C programming. 
    //      Logic to convert days to years, weeks and days in C program.
    int In_Days,Years,Weeks,Days;
    printf("Enter No. of Days : ");
    scanf("%d",&In_Days);
    Years = In_Days/365; // as 365 days in 1 year...
    Weeks = (In_Days-(365*Years))/7; // as 7 days in 1 week...
    Days = (In_Days-((365*Years)+(7*Weeks)));
    printf("No. of Years : %d\n",Years);
    printf("No. of Weeks : %d\n",Weeks);
    printf("No. of Days : %d\n",Days);
}