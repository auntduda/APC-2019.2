#include<stdio.h>

int main(){

    int n, m, i, j, r[11][11], d[11][11];

    scanf("%d %d", &n, &m);

    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            scanf("%d", &r[i][j]);
        }
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            scanf("%d", &d[i][j]);
        }
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            r[i][j] -= d[i][j];
        }
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            printf("%d ", r[i][j]);

            if(j == m){
                printf("\n");
            }
        }
    }

    printf("\n");

    return 0;
}
