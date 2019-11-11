#include<stdio.h>

typedef struct{
    char nome[100];
    float salario;
}empregados;

int main(){

    float auxindiceM=00000.00, auxindicem=87645868.78467856;

    int i, n, auxmenor, auxmaior;
        
    scanf("%d", &n);

    empregados proletario[n];

    for(i=0; i<n; i++){
        scanf("%s", proletario[i].nome);
        scanf("%f", &proletario[i].salario);
    }

    for(i=0; i<n; i++){

        if(proletario[i].salario < auxindicem){
            auxmenor = i;
            auxindicem = proletario[i].salario;
        }

        if(proletario[i].salario > auxindiceM){
            auxmaior = i;
            auxindiceM = proletario[i].salario;
        }

    }

    printf("%s\n%s\n", proletario[auxmaior].nome, proletario[auxmenor].nome);

    return 0;
}