#include<stdio.h>

int main(){

    int tempo, i=1, acrescimo=0, anterior1=0, anterior2=123456, maior=0, menor=0, tempo_total=0, pos_maior=0, pos_menor=0;

    while(tempo != 0){
        if(tempo == 0){
            break;
        }

        scanf("%d", &tempo);

        if(tempo < 0){
            acrescimo = (-1) * tempo;
            tempo = 0;
        }

        tempo_total += tempo + acrescimo;

        if(tempo > anterior1){
            maior = tempo;
            pos_maior = i;

            anterior1 = tempo;
        }

        else if(tempo < anterior2){
            menor = tempo;
            pos_menor = i;

            anterior2 = tempo;

            printf("o menor agora: %d\n", menor);
        }

        i++;
    }
    /*

    printf("Melhor volta: %d - %d seg\n", pos_maior, maior);
    printf("Pior volta: %d - %d seg\n", pos_menor, menor);
    printf("Tempo total: %d\n", tempo_total); */

    return 0;

}
