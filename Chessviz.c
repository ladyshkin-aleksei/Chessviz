#include <stdio.h>
void initDek(char deck[8][8]){
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
void  printDek ( char deck [8][8]){
for ( int i=0; i <8; ++i){
for (int j=0; j<8;++j){
printf("%c ",deck[i][j]);
}
printf("\n");
}
}
int main(){
    char deck[8][8];
    initDek(deck);
    printDek(deck);
}
