#include<stdio.h>

int main(){

    int n, m, mat1[11][11], mat2[11][11], matf[11][11], i, j, k;

    scanf("%d %d", &n, &m);

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            matf[i][j] = 0;
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            for(k=0; k<m; k++){
                matf[i][j] += mat1[i][k] * mat2[k][j];
            }

        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ", matf[i][j]);

            if(j == m-1){
                printf("\n");
            }
        }
    }

    return 0;

}
