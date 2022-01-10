#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#include <math.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>

int main(){

    int x,prediction;
    char my_move[10];
    char ai_move[10];
    char tas[10] = "tas";
    char kagit[10] = "kagit";
    char makas[10] = "makas";

    srand(time(NULL));
    prediction = rand()%3;

    switch (prediction)
    {
    case 0:
        strcpy(ai_move,"tas");
        break;
    case 1:
        strcpy(ai_move,"kagit");
        break;
    case 2:
        strcpy(ai_move,"makas");
        break;        

    default:
        break;
    }

    printf("\n\nSeciminiz(tas,kagit,makas)\n="); scanf("%s",my_move);
    
    if(strcmp(my_move,tas) == 0){
        if(strcmp(tas,ai_move) == 0) {printf("\nBilgisayar: Tas\n\nBerabere...");}
        if(strcmp(tas,ai_move) != 0 && strcmp(ai_move,kagit) == 0) {printf("\nBilgisayar: Kagit\n\nKaybettiniz...");}
        if(strcmp(tas,ai_move) != 0 && strcmp(ai_move,makas) == 0) {printf("\nBilgisayar: Makas\n\n**KAZANDINIZ...");}
        else;
    }
    if(strcmp(my_move,kagit) == 0){
        if(strcmp(kagit,ai_move) == 0) {printf("\nBilgisayar: Kagit\n\nBerabere...");}
        if(strcmp(kagit,ai_move) != 0 && strcmp(ai_move,makas) == 0) {printf("\nBilgisayar: Makas\n\nKaybettiniz...");}
        if(strcmp(kagit,ai_move) != 0 && strcmp(ai_move,tas) == 0) {printf("\nBilgisayar: Tas\n\n**KAZANDINIZ...");}
        else;
    }
    if(strcmp(my_move,makas) == 0){
        if(strcmp(makas,ai_move) == 0) {printf("\nBilgisayar: Makas\n\nBerabere...");}
        if(strcmp(makas,ai_move) != 0 && strcmp(ai_move,tas) == 0) {printf("\nBilgisayar: Tas\n\nKaybettiniz...");} 
        if(strcmp(makas,ai_move) != 0 && strcmp(ai_move,kagit) == 0) {printf("\nBilgisayar: Kagit\n\n**KAZANDINIZ...");}
        else;
    }


    return 0;
}