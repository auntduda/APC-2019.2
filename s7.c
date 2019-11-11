#include<stdio.h>

int main(){

    struct anivers{
        int dia;
        char mes[100];
        int ano;
    };

    struct coordenada{
        char cidade[100];
        char bairro[100];
        char rua[100];
        int ncasa;
    };

    struct empregados{
        char nome[100];
        float salario;
        char cpf[13];
        struct coordenada endereco;
        struct anivers nascimento;
    };

    struct empregados proletario[1000];

    int i, n, imaior;

    float maior=00.0;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%s %f %s", proletario[i].nome, &proletario[i].salario, proletario[i].cpf);

        scanf("%s %s %s %d", proletario[i].endereco.cidade, proletario[i].endereco.bairro, proletario[i].endereco.rua, &proletario[i].endereco.ncasa);

        scanf("%d %s %d", &proletario[i].nascimento.dia, proletario[i].nascimento.mes, &proletario[i].nascimento.ano);

    }

    for(i=0; i<n; i++){
        if(proletario[i].salario > maior){
            imaior = i;
            maior = proletario[i].salario;
        }
    }

    printf("%s %.2f %s\n", proletario[imaior].nome, proletario[imaior].salario, proletario[imaior].cpf);

    printf("%s %s %s %d\n", proletario[imaior].endereco.cidade, proletario[imaior].endereco.bairro, proletario[imaior].endereco.rua, proletario[imaior].endereco.ncasa);

    printf("%d %s %d\n", proletario[imaior].nascimento.dia, proletario[imaior].nascimento.mes, proletario[imaior].nascimento.ano);

    return 0;
}