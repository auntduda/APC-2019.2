#include<stdio.h>

int max(int x, int y, int z){
    if(x > y){
        int aux = x;
        x = y;
        y = aux;
    }

    if(y > z){
        int aux = y;
        y = z;
        z = aux;
    }

    if(x > y){
        int aux = x;
        x = y;
        y = aux;
    }

    return z;
}

int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int maior = max(a, b, c);

    printf("%d\n", maior);

    return 0;


}
