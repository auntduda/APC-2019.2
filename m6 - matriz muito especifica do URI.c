#include<stdio.h>

int min(int i, int j){
    if(i < j) return i;

    else return j;
}

int main(){

    int n, m[101][101], i, j, menor;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            m[i][j] = 1;

            menor = min(n-j-1, min(n-i-1, min(i, j)));

            m[i][j] = menor + 1;
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(m[i][j] < 10){
                printf("  %d ", m[i][j]);
            }
            else{
                printf(" %d ", m[i][j]);
            }
            if(j == n-1){
                printf("\n");
            }
        }
    }

    return 0;
}
