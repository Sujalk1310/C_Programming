#include <stdio.h>
#include <math.h>
void main() {
    float x,y,z,C1,C2,D;
    int A;
    printf("Enter Coefficient of X^2 :\n");
    scanf("%f",&x);
    printf("Enter Coefficient of X :\n");
    scanf("%f",&y);
    printf("Enter Constant :\n");
    scanf("%f",&z);
    D = (y*y)-4*x*z;
    switch (D >= 0) {
        case 1:
            A = (D == 0);
            switch (A) {
                case 0:
                    C1 = ((-y)+sqrt(D))/(2*x);
                    C2 = ((-y)-sqrt(D))/(2*x);
                    printf("%.2f\n",C1);
                    printf("%.2f",C2);
                    break;
                case 1:
                    C1 = ((-y)/(2*x));
                    printf("%.2f",C1);
                    break;
            }
            break;
        case 0:
            C1 = ((-y)/(2*x));
            C2 = (sqrt(-D)/(2*x));
            printf("%.2f+i%.2f",C1,C2);
            break;
    }

}