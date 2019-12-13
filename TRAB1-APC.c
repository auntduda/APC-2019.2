/* Caro corretor deste belo trabalho que lhe é apresentado,
        Queria dizer que o mesmo foi feito de última hora, dada a negligência da senhorita que vos fala, e peço desculpas desde já pela falta de otimização
        e organização no código do trabalho. A intenção é que esse erro não se repita no trabalho 2 (mas é a intenção mesmo).

        Mais uma vez, perdão.

        Grata,

        Dudíssima
*/

/*  Universidade de Brasilia
    Instituto de Ciencias Exatas
    Departamento de Ciencia da Computacao
    Algoritmos e Programação de Computadores – 2/2019

Aluno(a): Maria Eduarda Carvalho Santos
Matricula: 190092556
Turma: A
Versão do compilador: Ubuntu
Descricao: bom né, não tem muito o que falar; eu entreguei o trabalho na famosa mão de Deus

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define RAND(M, E) (M + (rand()%(2*E + 1) - E))
#define MEDIA_TEMPO 7
#define ERRO_TEMPO 3

#ifdef _WIN_32
    #define CLEAR "cls"
#else
    #define CLEAR "clear"
#endif 

/* variaveis globais */

char tab[15][27];
int a=1;
long long int tempo_restante; /* pro andamento do jogo */
int tempo_pra_explodir=-1; /* tempo pra bomba explodir */ 
int tem_bomba=0;
int ijog;
int jjog;

int finalizacao(int movimentos){
    printf("\n");
    
    if(movimentos == 0){
        system(CLEAR);
        printf("BRO COMO ASSIM VC CANCELOU A PARTIDA??\n");

        return a=0;
    }

    else if(movimentos == 1){
        system(CLEAR);
        printf("Voce morreu pro inimigo, OTARIO\n");

        return a=0;
    }

    else if(movimentos == 2){
        system(CLEAR);
        printf("Voce morreu pra bomba, irmao\n");

        return a=0;
    }

    else if(movimentos == 3){
        system(CLEAR);
        printf("Sem tempo irmao, cabo\n");

        return a=0;
    }

    else if(movimentos == 4){
        system(CLEAR);
        printf("PARABENS AMADE, VC GANHOU O JOGUETE!\n");

        return a=0;
    }

    else{ /* está sendo usado um "return 5" ao longo do codigo para entrar neste caso - procedimento do jogo  */
        return a=1;
    }
}

void imprimir(){


    int i, j;

    for(i=0; i<15; i++){
        for(j=0; j<27; j++){
            printf("%c", tab[i][j]);
        }
        printf("\n");
    }
}


void inicializacao(){

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
            int aleatorio = rand()%100+1;

            if(tab[i][j] != '+'){
                if(aleatorio <= 4){
                    tab[i][j] = '@';
                }

                else if(aleatorio <= 70){
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

int movimentos(char mov){
    int ibomba;
    int jbomba;

    if(mov == 'E'){
        return 0;
    }

    else{
        int i, j;

        for(i=1; i<14; i++){
            for(j=1; j<26; j++){
                if(tab[i][j] == '*'){
                    ijog = i;
                    jjog = j;
                }

                if(tab[i][j] == '&'){
                    ijog = i;
                    jjog = j; 

                    break;
                }
            }
            
            if(tab[i][j] == '&')
                break;
        }                   
                    /* meu deus como eu ODEIO usar switch-case */

        switch(mov){
            case 'a':

            case 'A': /*verificar caso de ser parede em j-1, inimigo, bomba, etc*/

                if(tab[ijog][jjog-1] != ' ' && tab[ijog][jjog-1] != '@'){
                    tab[ijog][jjog] = '&';

                    return 5;
                }

                if(tab[ijog][jjog-1] == '@'){
                    return 1;
                }

                if(tab[ijog][jjog] != '*'){
                    tab[ijog][jjog]= ' ';
                    tab[ijog][jjog-1] = '&';

                    return 5;
                }

                if(tab[ijog][jjog] == '*'){
                    tab[ijog][jjog-1] = '&';
                }

                break;

            case 'd':

            case 'D': /*verificar caso de ser parede em j+1, inimigo, bomba, etc*/
                if(tab[ijog][jjog+1] != ' ' && tab[ijog][jjog+1] != '@'){
                    tab[ijog][jjog] = '&';

                    return 5;
                }

                if(tab[ijog][jjog+1] == '@'){
                    return 1;
                }

                if(tab[ijog][jjog+1] != '*'){
                    tab[ijog][jjog] = ' ';
                    tab[ijog][jjog+1] = '&';

                    return 5;
                }

                if(tab[ijog][jjog] == '*'){
                    tab[ijog][jjog+1] = '&';
                }

                break;

            case 's':

            case 'S': /*verificar caso de ser parede em i-1, inimigo, bomba, etc*/

                if(tab[ijog-1][jjog] != ' ' && tab[ijog-1][jjog] != '@'){
                    tab[ijog][jjog] = '&';

                    return 5;
                }

                if(tab[ijog-1][jjog] == '@'){
                    return 1;
                }

                if(tab[ijog-1][jjog] != '*'){
                    tab[ijog][jjog] = ' ';
                    tab[ijog-1][jjog] = '&';

                    return 5;
                }

                if(tab[ijog][jjog] == '*'){
                    tab[ijog-1][jjog] = '&';
                }

                break;

            case 'x':

            case 'X': /*verificar caso de ser parede em i+1, inimigo, bomba, etc*/

                if(tab[ijog+1][jjog] != ' ' && tab[ijog+1][jjog] != '@'){
                    tab[ijog][jjog] = '&';

                    return 5;
                }

                else if(tab[ijog+1][jjog] == '@'){
                    return 1;
                }

                else if(tab[ijog+1][jjog] != '*'){
                    tab[ijog][jjog] = ' ';
                    tab[ijog+1][jjog] = '&';

                    return 5;
                }

                if(tab[ijog][jjog] == '*'){
                    tab[ijog+1][jjog] = '&';
                }

                break;

            case 'b':
                
            case 'B':
                if(tem_bomba == 0){
                    tem_bomba = 1;

                    ibomba = ijog;
                    jbomba = jjog;

                    tab[ibomba][jbomba] = '*';


                    tempo_pra_explodir = time(0) + RAND(MEDIA_TEMPO, ERRO_TEMPO);
                }
                
                else if(tem_bomba == 1){
                    printf("Ja tem bomba no tabuleiro, espertao\n");

                    system(CLEAR);


                    return 5;
                }


            break;    
        }

        if(tab[ijog][jjog] != '*')
            tab[ijog][jjog] = '&'; 

        if(time(0) > tempo_pra_explodir && tempo_pra_explodir != -1){
            tem_bomba = 0;

            tab[ibomba][jbomba] = ' ';

            int m, n;

            for(m=ibomba-1; m<=ibomba+1; m++){
                for(n=jbomba-1; n<=jbomba+1; n++){
                    if(tab[m][n] != '+' && tab[m][n] != '|' && tab[m][n] != '_'){
                        if(tab[m][n] == '&'){
                            return 2;
                        }
                            
                        else{
                            tab[m][n] = ' ';
                        }
                    }
                }
            }
                
            return 5;
                
        }


    for(i=1; i<14; i++){
        for(j=1; j<24; j++){
            if(tab[i][j] == '@'){
                return 5;
            }
        }
    }

    return 4;
    
    }
}

int main(){

    srand(time(0)); /* planta a semente da rand */
    system (CLEAR); /* limpa o sistema pra fica style */
    inicializacao(); /* chama a funcao pra apresentar o menu */
    obstaculos(); /* chama a funcao pra seta os inimigo, obstaculo, parede, etc */
    char comecar_jogo; /* variavel pra ser usada na hora de dar enter */

    /* setando o tempo em 200 */

    int tempo_total = time (0) + 200;

    int contadora = time (0);

    scanf("%c", &comecar_jogo); /* scanf usado >>>exclusivamente<<< pra ler o enter do teclado */

    if(comecar_jogo == '\n'){

        while(a){

            tempo_restante = tempo_total - contadora;

            contadora = time(0); /* toda vez que entra no loop, a contadora muda a time, e eh ai que a magica acontece: o tempo comeca a decrescer */
        
            if(tempo_restante <= 0){
                finalizacao(3);
            }

            else{  

                printf ("\n");

                system(CLEAR);

                printf("TEMPO: %lld\n\n", tempo_restante);

                printf("A = ESQUERDA\tD = DIREITA\tS = CIMA\nX = BAIXO\tB = BOMBA\tE = ENCERRAR\n\n");              

                imprimir();

                printf("\nMovimento: ");

                finalizacao(movimentos(getchar())); /* o funcionamento do jogo acontece todo nessa linha aqui, mas OLHA, o TRABAIO que essas duas funcao tao me dando, MEU AMIGO, compensava eu ter feito 84876497 coisas diferentes so pra nao ter que me dar ao luxo de usar apenas essa linha como funcionamento do jogo */
            }
        }
    
    }

    printf("Se esse jogo rodar, brigada por ter jogado\n");

    return 0;

}
