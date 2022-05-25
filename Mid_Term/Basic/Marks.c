#include <stdio.h>
void main() {
    float mat,eng,sci,com,hin,tot,avg,per;
    printf("Enter Maths Marks :\n");
    scanf("%f",&mat);
    printf("Enter English Marks :\n");
    scanf("%f",&eng);
    printf("Enter Science Marks :\n");
    scanf("%f",&sci);
    printf("Enter Computer Marks :\n");
    scanf("%f",&com);
    printf("Enter Hindi Marks :\n");
    scanf("%f",&hin);
    tot = mat+eng+sci+com+hin;
    avg = tot/(float)500;
    per = avg*100;
    printf("Total : %.2f\nAverage : %.2f\nPercentage : %.2f%%",tot,avg,per);
}