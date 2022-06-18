#include <stdio.h>
void main() {
    // 3.	Write a C program to input marks of five subjects of a student and calculate total, average and percentage of all subjects. 
    //      How to calculate total, average and percentage in C programming. 
    //      Logic to find total, average and percentage in C program.
    float PHP,DBMS,OS,DSA,OOPS,Range;
    printf("Enter Range : ");
    scanf("%f",&Range); 
    printf("Enter Marks in Range ( 0.00 - %.2f )\n",Range);
    printf("Enter Marks of PHP : ");
    scanf("%f",&PHP);
    printf("Enter Marks of DBMS : ");
    scanf("%f",&DBMS);
    printf("Enter Marks of OS : ");
    scanf("%f",&OS);
    printf("Enter Marks of DSA : ");
    scanf("%f",&DSA);
    printf("Enter Marks of OOPS : ");
    scanf("%f",&OOPS);
    
    if (PHP <= Range && DBMS <= Range && OS <= Range && DSA <= Range && OOPS <= Range){
        float Total = PHP+DBMS+OS+DSA+OOPS;
        float Average = Total/5;
        float Per_PHP = (PHP/40)*100, Per_DBMS = (DBMS/40)*100, Per_OS = (OS/40)*100, Per_DSA = (DSA/40)*100, Per_OOPS = (OOPS/40)*100;
        printf("Total Marks : %.2f\n",Total);
        printf("Average Marks : %.2f\n",Average);
        printf("Percentage of PHP : %.2f%%\n",Per_PHP);
        printf("Percentage of DBMS : %.2f%%\n",Per_DBMS);
        printf("Percentage of OS : %.2f%%\n",Per_OS);
        printf("Percentage of DSA : %.2f%%\n",Per_DSA);
        printf("Percentage of OOPS : %.2f%%\n",Per_OOPS);
        float Total_Per = (Per_DBMS+Per_DSA+Per_OOPS+Per_OS+Per_PHP)/5;
        printf("Total Percentage : %.2f%%\n",Total_Per);
    }
    else {
        printf("Error : Input Value Exceeds the Range !!");
    }
}