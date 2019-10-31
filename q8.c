#include<stdio.h>

int main(){

    int n, i=0;

    scanf("%d", &n);

    if(n%2 != 0){
        printf("O numero %d eh impar\n", n);
    }

    else{
        printf("Os numeros pares ate %d sao: ", n);
        while(i <= n){
            if(i%2 == 0){
                printf("%d ", i);
            }

            i++;
        }

        printf("\n");
    }

    return 0;

}
