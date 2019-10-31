#include<stdio.h>

int main(){

    int m[3][3], i, j, d[2];

    d[0]=0;

    d[1]=0;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &m[i][j]);

            if(i == j){
                d[0] += m[i][j];
            }
        }
    }

    for(j=0; j<3; j++){
        d[1] += m[j][2-j];
    }

    for(i=0; i<2; i++){
        printf("%d\n", d[i]);
    }

    return 0;

}
