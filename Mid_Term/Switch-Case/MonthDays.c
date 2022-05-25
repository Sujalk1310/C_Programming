#include <stdio.h>
void main() {
    int x;
    printf("Enter No. (1-12) :\n");
    scanf("%d",&x);
    switch (x) {
        case 1:
            printf("January : ");
            printf("%d",31);
            break;
        case 2:
            printf("February : ");
            printf("%d",28);
            break;
        case 3:
            printf("March : ");
            printf("%d",31);
            break;
        case 4:
            printf("April : ");
            printf("%d",30);
            break;
        case 5:
            printf("May : ");
            printf("%d",31);
            break;
        case 6:
            printf("June : ");
            printf("%d",30);
            break;
        case 7:
            printf("July : ");
            printf("%d",31);
            break;
        case 8:
            printf("August : ");
            printf("%d",31);
            break;
        case 9:
            printf("September : ");
            printf("%d",30);
            break;
        case 10:
            printf("October : ");
            printf("%d",31);
            break;
        case 11:
            printf("November : ");
            printf("%d",30);
            break;
        case 12:
            printf("December : ");
            printf("%d",31);
            break;
        default :
            printf("Incorrect Value Input");    
    }
    // Other Way -->
    // switch (x) {
    //     case 1:
    //     case 3:
    //     case 5:
    //     case 7:
    //     case 8:
    //     case 10:
    //     case 12:
    //         printf("%d",31);
    //         break;
    //     case 4:
    //     case 6:
    //     case 9:
    //         printf("%d",30);
    //         break;
    //     case 2:
    //         printf("%d",28);
    //         break;
    //     default:
    //         printf("Incorrect Value Input");
    // }
}