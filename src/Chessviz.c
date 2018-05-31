#include "Chessviz.h"

void chessdek(char deck[8][8]){
    char let[]={'r','n','b','q','k','b','n','r'};
    for (int j=0;j<8; ++j){
        deck[0][j] = let[j];
        deck[7][j] = let[j]-32;
        deck[1][j] = 'p';
        deck[6][j] = 'p'-32;
        for (int i=2; i<6; i++){
            deck [i][j] = ' ';
        }
    }
}

