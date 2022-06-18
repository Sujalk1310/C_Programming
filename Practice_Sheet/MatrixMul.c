#include <stdio.h>
void main() {
    // 36.	Write a C program to read elements in two matrices and multiply them. 
    //      Matrix multiplication program in C. 
    //      How to multiply matrices in C. Logic to multiply two matrices in C programming.
    int R1,C1,R2,C2;
    printf("Enter no of Row of arr1 : ");
    scanf("%d",&R1);
    printf("Enter no of Column of arr1 : ");
    scanf("%d",&C1);
    printf("Enter no of Row of arr2 : ");
    scanf("%d",&R2);
    printf("Enter no of Column of arr2 : ");
    scanf("%d",&C2);
    int arr1[R1][C1],arr2[R2][C2];
    if (C1 == R2){
        for (int i = 0; i < R1; i++){
            for (int j = 0; j < C1; j++){
                printf("Enter Value for index arr1[%d][%d] : ",i,j);
                scanf("%d",&arr1[i][j]);
            }
        }
        for (int i = 0; i < R2; i++){
            for (int j = 0; j < C2; j++){
                printf("Enter Value for index arr2[%d][%d] : ",i,j);
                scanf("%d",&arr2[i][j]);
            }
        }
        int arr3[R1][C2];
        for (int i = 0; i < R1; i++){
            for (int j = 0; j < C2; j++){
                int Sum = 0;
                for (int k = 0; k < C1; k++){
                    Sum += arr1[i][k] * arr2[k][j];
                }
                arr3[i][j] = Sum;
            }
        }
        for (int i = 0; i < R1; i++){
            for (int j = 0; j < C2; j++){
                printf("%d ",arr3[i][j]);
            }
            printf("\n");
        }  
    }
    else {
        printf("Multplication Cannot Happen...");
    }
} 