#include<stdio.h>

int main(){

    long long int total_idades=0;

    double idade, nota, nota1=0, nota2=0, nota3=0, nota4=0, nota5=0, total_notas=0, soma_idades=0;

    do{

        scanf("%lf", &idade);

        if(idade < 0){
            break;
        }

        do{
            scanf("%lf", &nota);

        }while(nota<1 || nota>5);

        if(nota == 1){
            nota1++;
        }
        else if(nota == 2){
            nota2++;
        }
        else if(nota == 3){
            nota3++;
        }
        else if(nota == 4){
            nota4++;
        }
        else if(nota == 5){
            nota5++;
        }

        soma_idades += idade;

        total_idades++;

    }while(idade >= 0);

    double media_participantes = soma_idades/total_idades;
    double pct1 = (nota1/total_idades)*100;
    double pct2 = (nota2/total_idades)*100;
    double pct3 = (nota3/total_idades)*100;
    double pct4 = (nota4/total_idades)*100;
    double pct5 = (nota5/total_idades)*100;


    printf("qtde de participantes: %lld\n", total_idades);
    printf("idade media dos participantes: %.1lf\n", media_participantes);
    printf("Otimo: %.1lf%%\n", pct1);
    printf("Bom: %.1lf%%\n", pct2);
    printf("Regular: %.1lf%%\n", pct3);
    printf("Ruim: %.1lf%%\n", pct4);
    printf("Pessimo: %.1lf%%\n", pct5);

    return 0;

}
