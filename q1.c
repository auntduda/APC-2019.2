#include<stdio.h>

int main(){

    int x, num, i=0, anterior=-10000000, maior=0, menor=0;

    scanf("%d", &x);

    while(i < x){
        scanf("%d", &num);

        if(anterior < num){
            maior = num;
            menor = anterior;
        }

        else{
            maior = anterior;
            menor = num;
        }

        anterior = num;

        i++;
    }

    printf("%d %d\n", menor, maior);

    return 0;

}
