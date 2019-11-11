#include<stdio.h>

int main(){

    struct pokemon{
        char nome[25];
        char tipo[20];
        int codigo;
        float peso;
        int flag;
    };

    struct pokemon bichim[25];

    int j=0, indice;

    char acao;

    int i;

    for(i=0; i<25; i++){
        bichim[i].flag = 0;
    }

    do{
        scanf("%c", &acao);

        if(acao == 'A'){
            scanf("%s", bichim[j].nome);
            scanf("%s", bichim[j].tipo);
            scanf("%d", &bichim[j].codigo);
            scanf("%f", &bichim[j].peso);
            bichim[j].flag = 1; 

            j++;
        }

        if(acao == 'E'){
            scanf("%d", &indice);

            if(bichim[indice].flag == 1){
                printf("%d - %s - %s - %.2f\n", bichim[indice].codigo, bichim[indice].nome, bichim[indice].tipo, bichim[indice].peso);
            }
            else{
                printf("Indice invalido.\n");
            }
        }

    }while(acao != 'S');

    return 0;

}