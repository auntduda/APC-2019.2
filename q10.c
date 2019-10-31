#include<stdio.h>

int main(){

    int n, fib, i=0, primeiro=0, segundo=1, terceiro=1;

    scanf("%d", &n);

    if(n < 2){
        printf(" \n");
    }

    else if(n == 2){
        printf("%d %d ", primeiro, segundo);
    }

    else{

        printf("%d %d %d ", primeiro, segundo, terceiro);

        while(i < n-2){
            fib = primeiro + segundo;

            primeiro = segundo;
            segundo = fib;

            fib = primeiro + segundo;

            printf("%d ", fib);


            i++;
        }

        printf("\n");

    }

}
