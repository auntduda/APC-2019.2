#include<stdio.h>

int main(){

    int i=0, v[10], aux=0;

    while(i < 10){
        scanf("%d", &v[i]);

        if(v[i] < v[i-1]){
            aux = v[i-1];
            v[i-1] = v[i];
            v[i] = aux;
        }

        i++;
    }

    i=0;
    int aux2=0;

    while(i < 10){
        if(v[i] < v[i-1]){
            aux2 = v[i-1];
            v[i-1] = v[i];
            v[i] = aux2;
        }
        i++;
    }

    i=0;
    int aux3=0;

    while(i < 10){
        if(v[i] < v[i-1]){
            aux3 = v[i-1];
            v[i-1] = v[i];
            v[i] = aux3;
        }
        i++;
    }

    i=0;
    int aux4=0;

    while(i < 10){
        if(v[i] < v[i-1]){
            aux4 = v[i-1];
            v[i-1] = v[i];
            v[i] = aux4;
        }
        i++;
    }

    i=0;
    int aux5=0;

    while(i < 10){
        if(v[i] < v[i-1]){
            aux5 = v[i-1];
            v[i-1] = v[i];
            v[i] = aux5;
        }
        i++;
    }

    i=0;
    int aux6=0;

    while(i < 10){
        if(v[i] < v[i-1]){
            aux6 = v[i-1];
            v[i-1] = v[i];
            v[i] = aux6;
        }
        i++;
    }

    i=0;
    int aux7=0;

    while(i < 10){
        if(v[i] < v[i-1]){
            aux7 = v[i-1];
            v[i-1] = v[i];
            v[i] = aux7;
        }
        i++;
    }

    i=0;
    int aux8=0;

    while(i < 10){
        if(v[i] < v[i-1]){
            aux8 = v[i-1];
            v[i-1] = v[i];
            v[i] = aux8;
        }
        i++;
    }

    i=0;
    int aux9;

    while(i < 10){
        if(v[i] < v[i-1]){
            aux9 = v[i-1];
            v[i-1] = v[i];
            v[i] = aux9;
        }
        i++;
    }

    i=0;
    int aux10=0;

    while(i < 10){
        if(v[i] < v[i-1]){
            aux10 = v[i-1];
            v[i-1] = v[i];
            v[i] = aux10;
        }
        i++;
    }

    i=0;
    int aux11=0;

    while(i < 10){
        if(v[i] < v[i-1]){
            aux11 = v[i-1];
            v[i-1] = v[i];
            v[i] = aux11;
        }
        i++;
    }

    i=0;


    while(i < 10){
        printf("%d ", v[i]);

        i++;
    }

    printf("\n");

    return 0;

}
