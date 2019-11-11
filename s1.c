#include<stdio.h>

int main(){

    float projetos[10];
    int i, numero;

    struct Boleto{
        int numero;
        float valor;
        char tipo;

    };

    struct projetasso boleto;

    for(i=0; i<10; i++){
        projetos[i] = 0.0;
    }

    do{
        scanf("%d", &numero);

        if(numero != -1){
            scanf("%f", &boleto.valor);
            scanf(" %c", &boleto.tipo);

            if(boleto.tipo == 'R' || boleto.tipo == 'r'){
                projetos[boleto.numero] = projetos[boleto.numero] + boleto.valor;
            }
            else{
                if(boleto.tipo == 'D' || boleto.tipo == 'd'){
                    projetos[boleto.numero] = projetos[boleto.numero] - boleto.valor;
                }
                else{
                    printf("Tipo invalido!!");
                }
            }
        }
    }while(boleto.numero != -1);

    for(i=0; i<10; i++){
        printf("Saldo do projeto %d = %f\n", i, projetos[i]);
    }

    return 0;

}