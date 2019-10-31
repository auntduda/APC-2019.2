#include<stdio.h>

char tab[15][27];

int main(){

    printf("************************BOOMBERMAN************************\n");

    printf("\n");

    int i, j;

    for(i=0; i<15; i++){
        for(j=0; j<27; j++){
            tab[i][j] = ' ';
        }
    }

    for(i=0; i<15; i++){
        for(j=0; j<27; j++){
            if(i%2==0 && j%2==0 && j<26){
                tab[i][j] = '+';
            }

            if(i==0 || i==14){
                tab[i][j] = '_';
            }

            if(j==0 || j==26){
                tab[i][j] = '|';
            }

            if(j==0 || j==26){
                if(i==0){
                    tab[i][j] = ' ';
                }
            }

        }
    }

    for(i=0; i<15; i++){
        for(j=0; j<27; j++){
            printf("%c", tab[i][j]);
        }

        printf("\n");
    }

    printf("Tecle <enter> para comecar o jogo");

    printf("\n");

    return 0;
}
