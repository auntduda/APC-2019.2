#include<stdio.h>

int main(){

    int m[3][3], i=0, j=0, s[3];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &m[i][j]);
        }
    }

    for(i=0; i<3; i++){
        s[i] = m[i][0] + m[i][1] + m[i][2];
    }

    for(i=0; i<3; i++){
        printf("%d\n", s[i]);
    }

    return 0;
}
