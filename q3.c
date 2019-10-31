#include<stdio.h>

int main(){

    int j, c, t, aux;

    double i;

    do{
        scanf("%d %lf %d %d", &c, &i, &t, &aux);

        j = (c * i * t);

        printf("Juros a ser pago: %d\n", j);

    }while(aux == 1);

    return 0;

}
