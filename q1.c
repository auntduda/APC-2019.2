#include<stdio.h>

int main(){

    float j, c, i, t;

    int aux;

    do{
        scanf("%f %f %f %d", &c, &i, &t, &aux);

        j = c * i * t;

        printf("Juros a ser pago: %d\n", j);

    }while(aux != 0);

    return 0;

}
