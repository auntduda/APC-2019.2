#include<stdio.h>

int main(){
    struct complexos{
        double real;
        double imaginario;
    };

    struct complexos numerocomplexo[3];

    int i;

    double partereal=0, parteimaginaria=0;

    for(i=0; i<2; i++){
        scanf("%lf %lf", &numerocomplexo[i].real, &numerocomplexo[i].imaginario);

        partereal += numerocomplexo[i].real;
        parteimaginaria += numerocomplexo[i].imaginario;
    }

    printf("soma = %.1lf + %.1lfi\n", partereal, parteimaginaria);

    return 0;

}