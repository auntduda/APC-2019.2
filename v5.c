#include<stdio.h>

int main(){

    int qtd_chinelos, tamanho, c[10], i=0, w[10], d[10], j=0, k=0, will=0, doacao=0;

    scanf("%d %d", &qtd_chinelos, &tamanho);

    while(i < qtd_chinelos){
        scanf("%d", &c[i]);

        if(c[i] >= tamanho){
            while(j < qtd_chinelos){
                w[j] = c[i];
            }

            will++;
        }

        else{
            while(k < qtd_chinelos){
                d[k] = c[i];
            }
            doacao++;
        }

        i++;
    }

    if(will == 0){
        printf("Will : 0\n");
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

    if(doacao == 0){
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
