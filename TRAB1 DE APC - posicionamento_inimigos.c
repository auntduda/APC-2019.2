#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char tab[15][27];

void obstaculos(){

    int i, j;

    for(i=1; i<14; i++){
        for(j=1; j<26; j++){
                int a = rand()%100+1;
                // Aqui era pra ser &&
                // if(tab[i][j] != '|' || tab[i][j] != '_' || tab[i][j] != '+'){
                // Mas eu achei mais bonitinho usar so esse if e diminuir o tamanho do for
                if (tab[i][j] != '+'){
                    if(a < 10){
                        tab[i][j] = '@';
                    }

                    else if(a < 40){
                        tab[i][j] = '#';
                    }

                    else{
                        tab[i][j] = ' ';
                    }

                }
        }
    }
}

int main(){

    int i, j;

    srand(time(0));

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
    // Faltou chamar a funcao antes de imprimir
    obstaculos();
    for(i=0; i<15; i++){
        for(j=0; j<27; j++){
            printf("%c", tab[i][j]);
        }

        printf("\n");
    }
}
