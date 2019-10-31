#include<stdio.h>

int pot(int base, int n){

    if(n == 0) return 1;

    if(n == 1) return base;

    return pot(base, n-1) * base;

}

int main(){

    int x, y;

    scanf("%d %d", &x, &y);

    printf("%d\n", pot(x, y));

    return 0;

}
