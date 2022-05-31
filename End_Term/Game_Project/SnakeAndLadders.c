#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int Dice() {
    int Click;
    printf("Enter 1 to roll the dice or Enter 0 to quit game : ");  
    scanf("%d",&Click);
    printf("\n");
    if (Click){
        srand(time(0));
        int No = (rand()%(6+1-1))+1; // (rand()%uppper+lower-1)+lower
        Six :
        if (No == 6){
            No +=  (rand()%(6+1-1))+1;
            if (No == 12){
                No +=  (rand()%(6+1-1))+1;
                if (No == 18){
                    printf("The Dice Rolled : %d\n",No);
                    printf("3 Six Drop !!\n");
                    No = (rand()%(6+1-1))+1;
                    if (No == 6){
                        goto Six;
                    }
                }
            }
        }
        return No;
    }
    else {
        return 0;
    }
}   
void Display(int player1step,int player2step) {
    int Board[101];
    printf("\nBoard ==>\n\n");
    for (int i = 0; i < 101; i++) {
        Board[i] = i;
    }
    for (int i = 0; i < 101; i++) {
        printf("%d",Board[i]);
        if (player1step == i && player2step == i){
            printf("(O)(X) ");
        }
        else {
            if (player1step == i){
                if (i<=9){
                    printf("(O)    ");
                }
                else {
                    printf("(O)   ");
                }
            }
            else if (player2step == i) {
                if (i<=9){
                    printf("(X)    ");
                }
                else {
                    printf("(X)   ");
                }
            }
            else {
                if (i <= 9){
                    printf("       ");
                }
                else {
                    printf("      ");
                }
            }
        }
        if (i%10==9 && i != 0 && i != 99){
            printf("\n");
        }
    }
}
int Move(int Step){
    int Ladder1[8] = {2,4,9,21,28,51,72,80},Ladder2[8] = {38,14,31,42,84,67,91,98};
    int Snakes1[8]= {17,54,62,64,87,93,94,99},Snakes2[8] = {7,34,19,60,36,73,75,79};
    for (int i = 0; i < 8; i++){
        if (Step == Ladder1[i]){
            printf("Player got Ladder !!\n");
            Step = Ladder2[i];
            printf("Player jumped to %d\n",Step);
            break;
        }
        else if (Step == Snakes1[i]){
            printf("Player got bit by a snake !!\n");
            Step = Snakes2[i];
            printf("Player jumped to %d\n",Step);
            break;
        }
    }
    return Step;
}
int Unlock() {
    int Value = Dice();
    if (Value > 6){
        Value = 6;
    }
    if (Value == 6 || Value == 1){
        printf("The Dice Rolled : %d\n",Value);
        printf("Unlocked !!\n");
        return 1;
    }
    else if (Value == 0){
        return -1;
    }
    else {
        printf("The Dice Rolled : %d\n",Value);
        printf("Locked !! Unable to move...\n");
        return 0;
    }
}
void main() {
    int Ladder1[8] = {2,4,9,21,28,51,72,80},Ladder2[8] = {38,14,31,42,84,67,91,98};
    int Snakes1[8]= {17,54,62,64,87,93,94,99},Snakes2[8] = {7,34,19,60,36,73,75,79};
    printf("Welcome to Snakes and Ladders Game !!\n");
    printf("It's Only 2 Player's Game\n\n\n");
    printf("Rules --->\n");
    printf("Ladders :\n");
    for (int i = 0;i < 8; i++){
        printf("%d. %d - %d\n",i+1,Ladder1[i],Ladder2[i]);
    }
    printf("Snakes :\n");
    for (int i = 0;i < 8; i++){
        printf("%d. %d - %d\n",i+1,Snakes1[i],Snakes2[i]);
    }
    int player1,player2,player1step = 0,player2step = 0,p1 = 0,p2 = 0;
    char cplayer = 'p';
    while (1){
        Display(player1step,player2step);
        printf("\n");
        if (cplayer == 'p') {
            Roll1 :
            printf("Player - 1 Turn\n");
            if (p1 == 1){
                player1 = Dice();
                if (player1 == 0){
                    printf("Exiting...\nThanks for playing...");
                    break;
                }
                printf("The Dice Rolled : %d\n",player1);
                cplayer = 'q';
                if (player1step+player1 <= 100){
                    player1step += player1;
                    player1step = Move(player1step);
                    if (player1step == 100){
                        printf("Player - 1 Won !!\n");
                        Display(player1step,player2step);
                        break;
                    }
                }
                else {
                    printf("Not Able to Move !!\n");
                }
            }
            else {
                p1 = Unlock();
                if (p1 == 1){
                    goto Roll1;
                }
                else if (p1 == -1){
                    printf("Exiting...\nThanks for playing...");
                    break;
                }
                else {
                    goto Roll2;
                }
            }
        }
        else {
            Roll2 :
            printf("Player - 2 Turn\n");
            if (p2 == 1){
                player2 = Dice();
                if (player2 == 0){
                    printf("Exiting...\nThanks for playing...");
                    break;
                }
                printf("The Dice Rolled : %d\n",player2);
                cplayer = 'p';
                if (player2step+player2 <= 100){
                    player2step += player2;
                    player2step = Move(player2step);
                    if (player2step == 100){
                        printf("Player - 2 Won !!\n");
                        Display(player1step,player2step);
                        break;
                    }
                }
                else {
                    printf("Not Able to Move !!\n");
                }
            }
            else {
                p2 = Unlock();
                if (p2 == 1){
                    goto Roll2;
                }
                else if (p2 == -1){
                    printf("Exiting...\nThanks for playing...");
                    break;
                }
                else {
                    goto Roll1;
                }
            }
        }
    }
    getch();
}
