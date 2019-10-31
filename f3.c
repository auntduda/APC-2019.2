#include<stdio.h>

int main(){

    long long int n[100100], x, soma_ninja=0;

    int i=0;

    scanf("%lld", &x);

    if(x%3 != 0){
        printf("SEM SOMA\n");
    }

    else{

        n[1] = 2;
        n[2] = 7;
        n[3] = 3;

        for(i=0; i<=x; i=i+3){
            n[i+4] = n[i+1] * 2;
        }

        i=0;

        for(i=0; i<=x; i=i+3){
            n[i+5] = n[i+2] * 3;
        }

        i=0;

        for(i=0; i<=x; i=i+3){
            n[i+6] = n[i+3] * 4;
        }

        i=0;

        for(i=1; i<=x; i++){
            soma_ninja += n[i];
        }

        printf("%lld\n", soma_ninja);
    }

    return 0;

}
