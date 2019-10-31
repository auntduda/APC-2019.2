#include<stdio.h>
#include<math.h>

int main(){

    int fib, i=0, primeiro=1, segundo=1, terceiro=2, j=0;

    printf("%d\n%d\n%d\n", primeiro, segundo, terceiro);

    while(i < 38){
        fib = primeiro + segundo;

        primeiro = segundo;
        segundo = fib;

        fib = primeiro + segundo;

        printf("%d\n", fib);

        /*

        printf("0000000000000000\n");

        while(j < 40){
            if(sqrt(fib) == j){
                printf("%d\n", fib);
            }

            j++;
        } */


        i++;
    }

    return 0;

}
