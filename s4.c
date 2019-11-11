#include<stdio.h>
#include<string.h>

int main(){

    struct datas{
        int dia;
        int mes;
        int ano;
    };

    struct datas formato[100];

    int i, n;

    char forma[4] /* = {"dma", "mda"}*/;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d/%d/%d", &formato[i].dia, &formato[i].mes, &formato[i].ano);
    }

    scanf("%s", forma);

    if(strcmp(forma, "dma") != 0 && strcmp(forma, "mda") != 0){
        printf("Formato invalido.\n");
    }

    else{

        for(i=0; i<n; i++){
            if(!strcmp(forma, "dma")){
                printf("%02d-%02d-%04d\n", formato[i].dia, formato[i].mes, formato[i].ano);
            }

            else if(!strcmp(forma, "mda")){
                printf("%02d-%02d-%04d\n", formato[i].mes, formato[i].dia, formato[i].ano); 
            }
        }
    }

    return 0;
}