#include<stdio.h>

int main(){

    int n, i=0;

    scanf("%d", &n);

    for(i=1; i<=10; i++){
        printf("%dx%d=%d\n", n, i, (n*i));
    }

    return 0;

}
