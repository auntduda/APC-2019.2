#include<stdio.h>

int main(){

    int n, i=0, num, soma=0;

    scanf("%d", &n);

    while(i < n){
        scanf("%d", &num);

        soma = soma + num;

        i++;
    }

    float result = soma;

    printf("%.2f\n", result);

    return 0;

}
