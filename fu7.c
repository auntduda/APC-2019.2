#include<stdio.h>

char matriz[3][3] = {
    {'-', '-', '-'},
    {'-', '-', '-'},
    {'-', '-', '-'}

};

void ImprimeJogo() {
	int i, j;

	for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf(" %c ", matriz[i][j]);
        }

        printf("\n");

        }

}

/* Funcao que armazena uma jogada no tabuleiro */
int AtualizaMatriz(int lin, int col, char tipo){

    if(matriz[lin][col] == '-'){
        matriz[lin][col] = tipo;

        return 4;
    }

    else{
        printf("Posicao invalida\n");

        return 5;
    }

}

/* Funcao que imprime as mensagens na tela */
int ImprimeStatus(int status) {
    if(status == 1){
        printf("Ganhou\n");
        return 1;
    }

    if(status == 0){
        printf("Empatou\n");
        return 1;
    }

    else if(status == 5) return 1;

    else return 0;
}

/* Funcao que testa se a partida terminou */
int JogoTerminou() {
    int i, j;

    for(i=0; i<3; i++){
                if((matriz[i][0] == matriz[i][1] && matriz[i][0] == matriz[i][2]) && matriz[i][0] != '-'){
                    return 1;
                }
                if((matriz[0][i] == matriz[1][i] && matriz[0][i] == matriz[2][i]) && matriz[0][i] != '-'){
                    return 1;
                }
                if((matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2]) && matriz[0][0] != '-'){
                    return 1;
                }
                if((matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0]) && matriz[0][2] != '-'){
                    return 1;
                }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(matriz[i][j] == '-'){
                return 2;
            }
        }
    }

    return 0;

}

int main(){
	const char tipo[2] = {'X','O'};
	int lin, col, count = 0;

	while (1){

		ImprimeJogo();
		if (ImprimeStatus(JogoTerminou())){
			break;
		}

		scanf("%d %d", &lin, &col);
		if (!ImprimeStatus(AtualizaMatriz(lin, col, tipo[count])))
			count = (count + 1) % 2;
	}

	return 0;
}
