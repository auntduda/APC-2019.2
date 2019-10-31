#include<stdio.h>

int main(){

    double p[26], peso_total;

    int i=0;

    for(i=0; i<25; i++){
        scanf("%lf", &p[i]);

        peso_total += p[i];
    }

    printf("%.1lf\n", peso_total);

    return 0;

}
