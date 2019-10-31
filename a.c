#include<stdio.h>
#include<math.h>

int main(){

    int i=0, fib;
    int primeiro = 1, segundo = 1, x;
    printf("1\n1\n");
    while(i < 40){
        x = primeiro + segundo;
        fib = segundo;
        primeiro = segundo;
        segundo = x;
        while(fib <= x){
            if(sqrt(x) * sqrt(x) == x){
                printf("%d\n", x);
            }

            fib++;
        }

        /* printf("%d\n", x); */

        i++;
        printf("Erro\n");
    }

}
