#include<stdio.h>

double pideal(char s, double h){
    if(s == 'M'){
        return 72.7 * h - 58;
    }
    if(s == 'F'){
        return 62.1 * h - 44.7;
    }

    else return 0;
}

int main(){

    int i, pessoas;

    double altura;

    char sexo;

    scanf("%d", &pessoas);

    for(i=0; i<pessoas; i++){
        scanf("%lf %c", &altura, &sexo);

        printf("%.2lf\n", pideal(sexo, altura));

    }

    return 0;

}
