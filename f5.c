#include<stdio.h>

int main(){

    int n, anos=0, p1, p2, i=0;

    double t1, t2;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d %d %lf %lf", &p1, &p2, &t1, &t2);
        anos=0;
        while(p1 < p2){
            if(anos>100){
                printf("Mais de 1 seculo.\n");
                break;
            }

            p1 += (t1 * p1)/100;

            p2 += (t2 * p2)/100;

            anos++;
        }
        if(anos <= 100){
            printf("%d anos.\n", anos);
        }
    }

    return 0;

}
