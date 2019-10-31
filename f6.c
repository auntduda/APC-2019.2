#include<stdio.h>

int main(){

    double d[12], deposito=0, rendimento=0;

    int i=0;

    for(i=0; i<12; i++){
        scanf("%lf", &d[i]);

        deposito += d[i];

        if(deposito < 10000){
            rendimento += (1.75/100) * (deposito + rendimento);
        }

        else{
            rendimento += (2.25/100) * (deposito + rendimento);
        }
    }

    printf("%.2lf\n", rendimento);

    return 0;

}
