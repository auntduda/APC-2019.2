#include<stdio.h>

int main(){

    double r[6], maior=0.00000, rs=0.00000, rp=0.00000;

    int i=0;

    for(i=0; i<6; i++){
        scanf("%lf", &r[i]);

        rs += r[i];

        rp = 1/rs;

        if(r[i] > maior){
            maior = r[i];
        }
    }

    /* printf("%.4lf\n", maior); */

    printf("%.4lf %.4lf %.4lf\n", rs, rp, (maior - (rs/6)));

    return 0;
}
