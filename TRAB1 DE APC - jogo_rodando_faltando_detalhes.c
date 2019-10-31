#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char tab[15][27];

int movimentos(char mov){ /*return 1 se morrer pro '@', return 2 pro caso de nao dar pra se mover, return 3 se der*/
    if(mov == 'E'){
        return 0;
    }

    else{

        int i, j;

        for(i=1; i<14; i++){
            for(j=1; j<26; j++){
                if(tab[i][j] == '&'){
                   switch(mov){
                        case 'A': /*verificar caso de ser parede em j-1, inimigo, bomba, etc*/
                            if(tab[i][j-1] == '+' || tab[i][j-1] == '#'){//deve ser "ou" ||
                                return 2;
                            }

                            else if(tab[i][j-1] == '@'){
                                return 1;
                            }

                            else{
                                    tab[i][j] = ' ';
                                    tab[i][j-1] = '&';
                            }
                   }
                }
            }
        }
    }

}

void imprimir (){

    int i, j;

    for(i=0; i<15; i++){
        for(j=0; j<27; j++){
            printf("%c", tab[i][j]);
        }
        printf("\n");
    }
}

void inicializacao (){

    int i, j;

    printf("************************BOOMBERMAN************************\n");

    printf("\n");

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

    imprimir();

    printf("Tecle <enter> para comecar o jogo");

    printf("\n");

}
void obstaculos(){

    int i, j;

    for(i=1; i<14; i++){
        for(j=1; j<26; j++){
            int a = rand()%100+1;
            if (tab[i][j] != '+'){
                if(a < 6){
                    tab[i][j] = '@';
                }

                else if(a < 70){
                    tab[i][j] = ' ';
                }

                else{
                    tab[i][j] = '#';
                }

                if(i == 13 && j  ==  1){
                    tab[13][1] = '&';
                }


            }

        }
    }

}


int main(){

int a = 1;

    srand(time(0));
    inicializacao();
    obstaculos();
    while (a){


        movimentos(getchar());
        //Botei essa funcao que limpa a tela aqui pra voce
        system("cls");  //P.S. Ela so funciona no Windows!
        imprimir();
    }
}
