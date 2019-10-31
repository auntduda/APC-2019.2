#include<stdio.h>

int main(){

    int i=0, p[5], maior=0, menor=310;

    while(p[i] >= 0){
        scanf("%d", &p[i]);

        i++;
    }

    printf("%d\n", p);

    return 0;

}
