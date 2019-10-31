#include<stdio.h>

int main(){

    int n, i=1, contador=0;

    scanf("%d", &n);

    if(n == 1){
        printf("1 não é primo\n");
    }

    else{
        while(i < n){
            if(n%i == 0){
                contador++;
            }

            i++;
        }
        if(contador == 0){
            printf("%d é primo\n", n);
        }
        else{
            printf("%d é divisivel por algum numero ai\n", n);
        }

    }

    return 0;

}
