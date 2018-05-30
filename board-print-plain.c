#include "board-print-plain.h"
#include <stdio.h>

void board_print_plane(deck[8][8]){
    for(i=0; i<8; ++i){
        for(j=0; j<8; ++j){
        printf("%c ", 8-j);
    }
        printf("\n");
    }
    printf("|---------------|\n");
    printf(" A B C D E F G H \n");
}
