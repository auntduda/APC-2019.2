#include<stdio.h>

int soma(int x){
    int i, soma=0;

    for(i=0; i<=x; i++){
        if(i%2 == 0){
            soma += i;
        }
    }

    return soma;
}

int main(){

    int n, somosa;

    scanf("%d", &n);

    if(n < 0){
        printf("Numero nao eh positivo\n");

        return 0;
    }

    else{
        somosa = soma(n);

        printf("%d\n", somosa);

        return 0;
    }

}
