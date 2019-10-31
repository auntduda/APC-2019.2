#include<stdio.h>

int m[3][3], i, j;

void ler(){

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &m[i][j]);
        }
    }
}

void printar(){
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){

            if(m[i][j] < 10){
                printf("%3d ", m[i][j]);
            }

            else if(m[i][j] < 100){
                printf("%3d ", m[i][j]);
            }

            else{
                printf("%d ", m[i][j]);
            }

            if(j==2){
                printf("\n");
            }

        }
    }
}


int main(){

    ler();
    printar();

    return 0;


}
