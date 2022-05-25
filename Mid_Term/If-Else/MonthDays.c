#include <stdio.h>
void main() {
    int a,d;
    printf("Enter Month :\n");
    scanf("%d",&a);
    if (a == 1) {
        d = 31;
        printf("January has %d",d);
    }
    if (a == 2) {
        d = 28;
        printf("February has %d",d);
    }
    if (a == 3) {
        d = 31;
        printf("March has %d",d);
    }
    if (a == 4) {
        d = 30;
        printf("April has %d",d);
    }
    if (a == 5) {
        d = 31;
        printf("May has %d",d);
    }
    if (a == 6) {
        d = 30;
        printf("June has %d",d);
    }
    if (a == 7) {
        d = 31;
        printf("July has %d",d);
    }
    if (a == 8) {
        d = 31;
        printf("August has %d",d);
    }
    if (a == 9) {
        d = 30;
        printf("September has %d",d);
    }
    if (a == 10) {
        d = 31;
        printf("October has %d",d);
    }
    if (a == 11) {
        d = 30;
        printf("November has %d",d);
    }
    if (a == 12) {
        d = 31;
        printf("December has %d",d);
    }
}