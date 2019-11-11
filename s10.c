#include<stdio.h>

int main(){
    struct uniao{
        long long int x[30];
        struct palavras{
            char nome[50];
            char sobrenome[250];
        }palavra;
        int z[40];
    };

    struct uniao numeros;

    printf("The size of this struct is: %ld\n", sizeof(numeros));

    return 0;
}