#include<stdio.h>

int main(){

    int doces, min_doces, q[100], i=0, criancas=0, qtd=0;

    scanf("%d %d", &doces, &min_doces);

    while(i < doces){
        scanf("%d", &q[i]);

        if(q[i]/min_doces > 0){
            qtd = q[i]/min_doces;
            criancas = criancas + qtd;
        }

        i++;
    }

    printf("%d\n", criancas);

    return 0;

}
