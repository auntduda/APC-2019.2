#include<stdio.h>

int l[100][100], r, c;
char entrada, saida;

int check(int i, int j){

    if(saida == 'N' && i==0){
        return 1;
    }
    else if(saida == 'S' && i==r-1){
        return 1;
    }
    else if(saida == 'L' && j==c-1){
        return 1;
    }
    else if(saida == 'O' && j==0){
        return 1;
    }
    else return 0;

}

int andar(int i, int j){
    if(check(i, j)){
        return 1;
    }

    l[i][j] = 1;
    int m = 0;

    if(i>0 && l[i-1][j] == 0){
        return m |= andar(i-1, j);
    }

    else if(i<r-1 && l[i+1][j] == 0){
        return m |= andar(i+1, j);
    }

    else if(j<c-1 && l[i][j+1] == 0){
        return m |= andar(i, j+1);
    }

    else if(j>0 && l[i][j-1] == 0){
        return m |= andar(i, j-1);
    }

    else return m;

}

int main(){

    int i, j, r, c, resultado;

    scanf("%c %c %d %d", &entrada, &saida, &r, &c);

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", &l[i][j]);

            resultado = andar(i, j);
        }
    }

    if(resultado == 1){
        printf("Existe saida %c - %c.\n", entrada, saida);
    }

    else{
        printf("Nao existe saida %c - %c.\n", entrada, saida);
    }

    return 0;

}



