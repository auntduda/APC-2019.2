#include<stdio.h>

int main(){

    int qtd, tamanho, i=0, v[1000], w[1000], d[1000], will=0, doacao=0;

    scanf("%d %d", &qtd, &tamanho);

    while(i < qtd){
        scanf("%d", &v[i]);

        if(v[i] >= tamanho){
            w[i] = v[i];
            will++;
        }

        i++;
    }

    i=0;

    while(i < qtd){
        if(v[i] < tamanho){
            d[i] = v[i];
            doacao++;
        }

        i++;
    }

    if(will == 0){
        printf("Will: 0\n");
    }

    else{
        i=0;

        printf("Will: ");

        while(i < will){

            printf("%d ", w[i]);

            i++;
        }
        printf("\n");
    }

    if(doacao==0){
        printf("Doacao: 0\n");
    }

    else{
        i=0;

        printf("Doacao: ");

        while(i < doacao){

            printf("%d ", d[i]);

            i++;
        }

        printf("\n");

    }

    return 0;
}
