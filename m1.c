#include<stdio.h>

int main(){

    int m[3][3], i, j, s[3];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &m[i][j]);
        }
    }

    for(j=0; j<3; j++){
        s[j] = m[0][j] + m[1][j] + m[2][j];
    }

    for(j=0; j<3; j++){
        printf("%d ", s[j]);
    }

    printf("\n");

    return 0;
}
