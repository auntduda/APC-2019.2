#include<stdio.h>

int main(){
    struct empregados{
        char nome[100];
        float salario;
        char cpf[12];
    };

    struct empregados proletario[1000];

    int i, n, imaior, imenor;

    float maior=1516145.51, menor=000000.00;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%s %f %s", proletario[i].nome, &proletario[i].salario, proletario[i].cpf);

        if(proletario[i].salario > menor){
            imaior = i;
            menor = proletario[i].salario;
        }

        if(proletario[i].salario < maior){
            imenor = i;
            maior = proletario[i].salario;
        }
    }

    
    printf("%s %.2f %s\n", proletario[imaior].nome, proletario[imaior].salario, proletario[imaior].cpf);
    printf("%s %.2f %s\n", proletario[imenor].nome, proletario[imenor].salario, proletario[imenor].cpf);

    return 0;
}