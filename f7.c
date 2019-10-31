#include<stdio.h>


int main(){

    int qtd;

    double preco, valor_total=0;

    do{

        scanf("%d", &qtd);

        if(qtd == 0){
            break;
        }

        do{
            scanf("%lf", &preco);

        }while(preco < 0);

        valor_total += preco * qtd;

    }while(qtd != 0);

    printf("%.2lf\n", valor_total);

    return 0;

}
