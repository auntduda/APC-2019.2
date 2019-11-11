#include<stdio.h>
#include<string.h>

int main(){

    struct pessoa{
        char nome[100];
        double altura;
        double peso;
        char cpf[12];
        char sexo;
    };

    struct pessoa fitness[1000];

    int i, n, iprocurado;

    double imc;

    char cpfprocurado[12];

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%s %lf %lf %s %c", fitness[i].nome, &fitness[i].altura, &fitness[i].peso, fitness[i].cpf, &fitness[i].sexo);
    }

    scanf("%s", cpfprocurado);

    for(i=0; i<n; i++){
        if(strcmp(cpfprocurado, fitness[i].cpf)==0){
            iprocurado = i;
            imc = fitness[i].peso/(fitness[i].altura*fitness[i].altura);
        }
    }

    printf("%c\t%s\t%.2lf\n", fitness[iprocurado].sexo, fitness[iprocurado].nome, imc);

    return 0;

}