#include<stdio.h>

int main(){

    int v[100100], tempo_total=0, i=0, maior=0, pos_maior=0, menor=123456, pos_menor=0, anterior1=0, anterior2=0;

    while(v[i] != 0){
        scanf("%d", &v[i]);

        if(v[i] < 0){
            v[i+1] += (-1) * v[i];
            v[i] = 0;
        }

        tempo_total += v[i];

        if(v[i] > anterior1){
            maior = v[i];
            pos_maior = i;

            anterior1 = v[i];
        }
        else if(v[i] < anterior2){
            menor = v[i];
            pos_menor = i;

            anterior2 = v[i];
        }

        i++;
    }

    printf("Melhor volta: %d - %d seg\n", pos_maior, maior);
    printf("Pior volta: %d - %d seg\n", pos_menor, menor);
    printf("Tempo total: %d\n", tempo_total);
}
