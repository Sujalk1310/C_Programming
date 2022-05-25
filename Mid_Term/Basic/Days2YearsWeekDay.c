#include <stdio.h>
void main(){
    int Days,Y,W,D;
    printf("Enter No. of Days :\n");
    scanf("%d",&Days);
    Y = Days/365;
    W = (Days%365)/7; // (Days-(365*Y))7;
    D = ((Days%365)%7); // (Days-((365*Y)+(7*W)))7;
    printf("No. of Years : %d\nNo. of Weeks : %d\nNo. of Days : %d\n",Y,W,D);
    printf("Left");
}