#include<stdio.h>

int main(){

    int n, i=0, v, anterior=0, maior_v;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &v);

        if(v > anterior){
            maior_v = v;
        }

        anterior = v;
    }

    if(maior_v < 10){
        printf("1\n");
    }

    else if(maior_v >= 10 && maior_v < 20){
        printf("2\n");
    }
    else{
        printf("3\n");
    }

    return 0;

}
