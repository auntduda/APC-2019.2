/*  Universidade de Brasilia
    Instituto de Ciencias Exatas
    Departamento de Ciencia da Computacao
    Algoritmos e Programacao de Computadores – 2/2019

Aluno(a): Maria Eduarda Carvalho Santos
Matricula: 190092556
Turma: A
Versão do compilador: Ubuntu 7.4.0
Descricao: o trabalho DEFINITIVAMENTE nao foi feito apenas por mim; os monitores e o Lucca foram fundamentais
na realizacao desse tramboio aqui; nao me orgulho disso, MAS isso nao vai ficar por isso mesmo; desde ja, peço desculpas
pela falta de organizacao do codigo; o jogo roda em uma unica linha (l. 623), e eu usei duas funcoes pra poder fazer e 
imprimir o ranking; o jogo funciona meio que noventa porcento na funcao movimentos(char)

*/

#include <stdio.h>                                                                                                  /* nao tinha medo o tal Joao de Santo Cristo*/
#include <stdlib.h>                                                                                                 /* era o que todos diziam quando ele se perdeu */
#include <time.h>                                                                                                   /* deixou pra tas todo o marasmo da fazenda*/
#include <string.h>                                                                                                 /* so pra sentir no seu sangue o odio que jesus lhe deu */
                                                                                                                    /* quando crianca so pensava em ser bandido */
#define RAND(M, E) (M + (rand()%(2*E + 1) - E))                                                                     /* ainda mais quando com um tiro de soldado o pai morreu */
#define MEDIA_TEMPO 7                                                                                               /* era o terror da sertania onde morava */
#define ERRO_TEMPO 3                                                                                                /* e na escola ate o professor com ele aprendeu */
                                                                                                                    /* ia pra igreja so pra roubar o dinheiro */
#ifdef _WIN_32                                                                                                      /* que as velhinhas colocavam na caixinha do altar */
    #define CLEAR "cls"                                                                                             /* sentia mesmo que era mesmo diferente */
#else                                                                                                               /* sentia que aquilo ali nao era o seu lugar */
    #define CLEAR "clear"                                                                                           /* ele queria sair para ver o maaaaar */
#endif                                                                                                              /* e as coisas que ele via na televisao */
                                                                                                                    /* juntou dinheiro para poder viajaaaaaar */
/* variaveis globais */                                                                                             /* de escolha propria, escolheu a solidaao */
                                                                                                                    /* comia todas as menininhas da cidade */
char tab[15][27];                                                                                                   /* de tanto brincar de medico, aos doze era professor */
int a=1;                                                                                                            /* aos quinze foi mandado pro reformatorio */
long long int tempo_restante; /* pro andamento do jogo */                                                           /* onde aumentou seu odio diante de tanto terror */
int tempo_pra_explodir=-1; /* tempo pra bomba explodir */                                                           /* nao entendia como a vida funcionava */
int tem_bomba=0;                                                                                                    /* discriminacao por causa da sua classe e sua cor */
int ijog;                                                                                                           /* FICOU CANSADO DE TENTA ACHA RESPOSTA */
int jjog;                                                                                                           /* E COMPROU UMA PASSAGEM FOI DIRETO A SALVADO*/
int ibomba;                                                                                                         /* e la chegando foi tomar um cafezinho */
int jbomba;                                                                                                         /* e encontrou um boiadero com quem foi falaar*/
char nome[20];                                                                                                      /* e o boiadero tinha uma passagem e ia perde a viagem*/
FILE* fp;                                                                                                           /* mas joao foi lhe salva */
                                                                                                                    /* dizia ele STO INDO PRA BRASILIAAA */
typedef struct{                                                                                                     /* NESTE PAIS LUGAR MELHOR NAO HAAA */
    char nome[20];                                                                                                  /* TO PRECISANDO VISITA A MINHA FILHAAAA */
    long long int tempo;                                                                                            /* EU FICO AQUI E OCE VAI NO MEU LUGAAAR */
}tipoRanking;                                                                                                       /* e joao aceitou sua proposta */
                                                                                                                    /* e num onibus entrou no planalto central */
tipoRanking ranking;                                                                                                /* ele ficou bestificado com a cidade */
                                                                                                                    /* saindo da rodoviaria viu as luzes de natal */
void rankeada();                                                                                                    /* MEU DEUS MAI QUE CIDADE LINDAAAA */
void imprime_ranking();                                                                                             /* NO ANO NOVO EU COMECO A TRABALHA */
                                                                                                                    /* CORTA MADERA, APRENDIZ DE CARPINTERO */
int finalizacao(int movimentos){                                                                                    /* GANHAVA CEM MIL POR MES EM TAGUATINGAAA*/
    printf("\n");                                                                                                   /* na sexta-feira ia pra zona da cidade */
                                                                                                                    /* gasta todo o seu dinheiro de rapaz trabalhador */
    if(movimentos == 0){                                                                                            /* e conhecia muita gente interessannte */
        system(CLEAR);                                                                                              /* ate o neto bastardo do seu bisavo */
        printf("BRO COMO ASSIM VC CANCELOU A PARTIDA??\n\n");                                                       /* um peruano que vivia na boliviaaaaa*/
                                                                                                                    /* e muitas coisas trazia de laaaa */
        return a=0;                                                                                                 /* seu nome era pablo e ele diziaaaa */
    }                                                                                                               /* que um negocio ele iria comecaaaaar */
                                                                                                                    /* e o santo cristo ate a morte trabalhava */
    else if(movimentos == 1){                                                                                       /* mas o dinheiro nao dava pr'ele se alimentar */
        system(CLEAR);                                                                                              /* e ouvia as sete horas no noticiario */
        printf("Voce morreu pro inimigo, OTARIO\n\n");                                                              /* que sempre dizia que o seu ministro ia ajudaaaa */
                                                                                                                    /* mas ele nao queria mais conversa */
        return a=0;                                                                                                 /* e decidiu que como o pablo ele iria se virar */
    }                                                                                                               /* elaborou mais uma vez seu plano santo */
                                                                                                                    /* e sem ser crucificado a plantacao foi comecar */
    else if(movimentos == 2){                                                                                       /* logo logo os maluco da cidade souberam da novidade */
        system(CLEAR);                                                                                              /* TEM BAGULHO BOM AI */
        printf("Voce morreu pra bomba, irmao\n\n");                                                                 /* e joao de santo cristo ficou rico */
                                                                                                                    /* e acabou com todos os traficante dali */
        return a=0;                                                                                                 /* fez amigos, frequentava a asa norte */
    }                                                                                                               /* e ia pra festa de rock pra se liberta */
                                                                                                                    /* mas de repente sob uma ma influencia dos boyzinho da cidade */
    else if(movimentos == 3){                                                                                       /* comecou a roubaaaaaaaaaaar */
        system(CLEAR);                                                                                              /* ja no primeiro roubo ele dancou */
        printf("Sem tempo irmao, cabo\n\n");                                                                        /* e pro inferno ele foi pela primeira vez */
                                                                                                                    /* violencia e estupro do sEU CORPOOOOO */
        return a=0;                                                                                                 /* VOCES VAO VE EU VO PEGA VOCEEEEEEEEES */
    }                                                                                                               /* AGORA O SANTO CRISTO ERA BANDIDO */
                                                                                                                    /* DESTEMIDO E TEMIDO NO DISTRITO FEDERAL */
    else if(movimentos == 4){                                                                                       /* NAO TINHA NENHUM MEDO DE POLICIA */
        system(CLEAR);                                                                                              /* CAPITAO OU TRAAFICANTE, PLAYBOY OU GENERAL */
        printf("PARABENS AMADE, VC GANHOU O JOGUETE!\n\n");                                                         /* foi quando conheceu uma menina */
                                                                                                                    /* e de todos os seus pecados ele se arrependeu */
        ranking.tempo = tempo_restante;                                                                             /* maria lucia era uma menina linda */
                                                                                                                    /* e o coracao dele pra ela o santo cristo prometeeeu */
        imprime_ranking();                                                                                          /* ele dizia que queria se casar */
                                                                                                                    /* e carpinteiro ele voltou a ser */
        rankeada();                                                                                                 /* maria lucia pra sempre vou te amaaaar */
                                                                                                                    /* e um filho com voce eu quero teeeeer */
        return a=0;                                                                                                 /* o tempo passa e um dia vem na porta */
    }                                                                                                               /* um senhor de alta classe com dinheiro na mao */
                                                                                                                    /* e ele faz uma proposta indecorosa */
    else{ /* está sendo usado um "return 5" ao longo do codigo para entrar neste caso - procedimento do jogo */     /* e diz que espera uma resposta, uma resposta do joao */
        return a=1;                                                                                                 /* nao boto bomba em banca de jornal */
    }                                                                                                               /* nem em colegio e crianca isso eu num faco nao */
}                                                                                                                   /* e nao protejo general de dez estrelas */
                                                                                                                    /* que fica atras da mesa com o cu na maaaao */
void imprimir(){                                                                                                    /* e eh melhor o senhor sair da minha casa */
                                                                                                                    /* nunca brinque com um peixe de ascendete escorpiao */
                                                                                                                    /* mas antes de sair e com odio no olhar o velho disse */
    int i, j;                                                                                                       /* VOCE PERDEU SUA VIDA MEU IRMAO */
                                                                                                                    /* voce perdeu a sua vida meu irmaaao */
    for(i=0; i<15; i++){                                                                                            /* voce perdeu a sua vida meu irmaaao */
        for(j=0; j<27; j++){                                                                                        /* essas palavras vao ficar no coracaaao */
            printf("%c", tab[i][j]);                                                                                /* eu vou sofrer as consequencias meu irmaaao */
        }                                                                                                           /* nao eh que o santo TAVA CERTO */
        printf("\n");                                                                                               /* e seu futuro era incerto e ele nao foi trabalhar */
    }                                                                                                               /* se embebedou e no meio da bebedeira  */
}                                                                                                                   /* descobriu que tinha outro trabalhando em seu lugar  */
                                                                                                                    /* falou com o pablo que queria um parcero  */
void inicializacao(){                                                                                               /* e tambem tinha dinheiro e queria se armar */
                                                                                                                    /* pablo trazia o contrabando da bolivia  */
    printf("************************BOOMBERMAN************************\n\n");                                       /* e santo cristo revendia em planALTINAAAAA */
                                                                                                                    /* mas acontece que um tal de jeremias */
    printf("1. JOGAR\n2. CONITNUAR O JOGO\n3. RANKING\n4. SAIR\n");                                                 /* traficante de renome apareceu por la */
                                                                                                                    /* ficou sabendo dos planos de santo cristo  */
    printf("Opcao: ");                                                                                              /* e decidiu que com joao ele ia acabar */
                                                                                                                    /* mAS PABLO TROUXE UMA WINCHESTER-22 */
                                                                                                                    /* E SANTO CRISTO JA SABIA ATIRAR */
}                                                                                                                   /* E DECIDIU USAR A ARMA SO DEPOOOOOIS */
                                                                                                                    /* QUE O JEREMIAS COMECASSE A BRIGAR */
                                                                                                                    /* O JEREMIAS MACONHEIRO SEM VERGONHA */
void inicializacao2(){                                                                                              /* ORGANIZOU A ROCKONHA E FEZ TODO MUNDO DANCAR */
                                                                                                                    /* desvirginava mocinhas inocentes */
    int i, j;                                                                                                       /* se dizia que era crente, mai num sabia rezar */
                                                                                                                    /* e o sANTO CRISTO HA MUITO NAO IA PRA CASAAAA */
    printf("************************BOOMBERMAN************************\n");                                         /* E A SAUDADE COMECOU A APERTAAAAAAR */
                                                                                                                    /* EU VOU ME EMBORA, EU VO VE MARIA LUCIAAAA */
    printf("\n");                                                                                                   /* JA TA EM TEMPO DE A GENTE SE CASAAAAAAAR */
                                                                                                                    /* CHEGANDO EM CASA ENTAO ELE CHOROU */
    for(i=0; i<15; i++){                                                                                            /* E PRO INFERNO ELE FOI PELA SEGUNDA VEZ */
        for(j=0; j<27; j++){                                                                                        /* COM MARIA LUCIA JEREMIAS SE CASOOOOOOOOU */
            tab[i][j] = ' ';                                                                                        /* E UM FILHO NELA ELE FEEEEEEEEEEEEEZ */
        }                                                                                                           /* AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA */
    }                                                                                                               /* O SANTO CRISTO ERA SO ODIO POR DENTRO */
                                                                                                                    /* E ENTAO O JEREMIAS PRO DUELO ELE CHAMOOOOU */
    for(i=0; i<15; i++){                                                                                            /* AMANHA AS DUAS HORAS NA CEILANDIA */
        for(j=0; j<27; j++){                                                                                        /* EM FRENTE AO LOTE 14 EH PRA LA QUE EU VO */
            if(i%2==0 && j%2==0 && j<26){                                                                           /* E OCE PODE ESCOLHE AS SUAS ARMAS */
                tab[i][j] = '+';                                                                                    /* QUE EU ACABO MESMO COM VOCE SEU PORCO TRAIDOOOOOOR */
            }                                                                                                       /* E MATO TAMBEM MARIA LUCIA */
                                                                                                                    /* AQUELA MENINA BOSAL PRA QUEM JUREI O MEU AMOR */
            if(i==0 || i==14){                                                                                      /* E O SANTO CRISTO NAO SABIA O QUE FAZEEEEER */
                tab[i][j] = '_';                                                                                    /* QUANDO VIU O REPORTER DA TELEVISAAAAO */
            }                                                                                                       /* QUE DEU NOTICIA DO DUELO NA TV */
                                                                                                                    /* DIZENDO A HORA O LOCAL E A RAZAO */
            if(j==0 || j==26){                                                                                      /* NO SABAOD ENTAO AS DUAS HORAS */
                tab[i][j] = '|';                                                                                    /* TODO O POVO SEM DEMORA FOI LA SO PRA ASSISTIR */
            }                                                                                                       /* UM HOMEM QUE ATIRAVA PELAS COSTAS */
                                                                                                                    /* ACERTOU O SANTO CRISTO E COMECOU A SORRIR */
            if(j==0 || j==26){                                                                                      /* SENTINDO O SANGUE NA GARGANTA */
                if(i==0){                                                                                           /* JOAO OLHOU PRAS BANDEIRINHAS E PRO POVO A APLAUDIR */
                    tab[i][j] = ' ';                                                                                /* E OLHOU PRO SORVETEIRO E PRAS CAMERAS E PRA GENTE DA TV QUE FILMAVA TUDO ALI */
                }                                                                                                   /* E SE LEMBROU DE QUANDO ERA UMA CRIANCAAAAAAAA */
            }                                                                                                       /* E DE TUDO QUE VIVERA ATE ALIIIIII */
                                                                                                                    /* E DECIDIU ENTRAR DE VEZ NAQUELA DANCAAAAAAA */
        }                                                                                                           /* SE A VIA-CRUCIS VIROU CIRCO STOU AQUIIIIIIII */
    }                                                                                                               /* E NISSO O SOL CEGOU SEUS OLHOS */
                                                                                                                    /* E ENTAO MARIA LUCIA ELE RECONHECEU */
    imprimir();                                                                                                     /* ELA TRAZIA A WINCHESTER-22 */
                                                                                                                    /* A ARMA QUE SEU PRIMO PABLO LHE DEU */
    printf("Tecle <enter> para comecar o jogo");                                                                    /* jeremias eu sou homem, coisa que oce nao eh */
                                                                                                                    /* e nao atiro pelas costas nao */
    printf("\n");                                                                                                   /* oLHA PRA CA FILHA DA PUTA SEM VEROGNHA */
                                                                                                                    /* DA UMA OLHADA NO MEU SANGUE E VEM SENTIR O TEU PERDAO */
}                                                                                                                   /* e o santo cristo com a winchester-22 */
                                                                                                                    /* deu cinco tiros no bandido traidor */
                                                                                                                    /* maria lucia se arrependeu depoooooois */
void obstaculos(){                                                                                                  /* e morreu junto com o joao seu protetor */
                                                                                                                    /* e o povo declarava que joao de santo cristo */
    int i, j;                                                                                                       /* era santo porque sabia morrer */
                                                                                                                    /* e a alta burguesia da cidade */
    for(i=1; i<14; i++){                                                                                            /* nao acreditou na historia que eles viram na tv */
        for(j=1; j<26; j++){                                                                                        /* e joao nao conseguiu o que queria */
            int aleatorio = rand()%100+1;                                                                           /* quando veio pa brasilia, com o diabo ter */
                                                                                                                    /* ele queria era fala pro presidente */
            if(tab[i][j] != '+'){                                                                                   /* pra ajuda toda essa gente que so faaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz */
                if(aleatorio <= 4){                                                                                 /* soFREEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEER */
                    tab[i][j] = '@';
                }

                else if(aleatorio <= 70){
                    tab[i][j] = ' ';
                }

                else{
                    tab[i][j] = '#';
                }

                if(i == 13 && j  ==  1){
                    tab[13][1] = '&';
                }


            }

        }
    }

}

int movimentos(char mov){

    if(mov == 'E'|| mov == 'e'){

        FILE* jogo_salvo;

        jogo_salvo = fopen("jogo.bin", "wb"); /*ta retornando um endereco pra jogo_salvo */

        fwrite(&tab[0][0], 420, 1, jogo_salvo);

        fwrite(&tempo_restante, 8, 1, jogo_salvo);

        fwrite(&nome, 20, 1, jogo_salvo);

        return 0;
    }

    else{
        int i, j;

        for(i=1; i<14; i++){
            for(j=1; j<26; j++){
                if(tab[i][j] == '*'){
                    ijog = i;
                    jjog = j;
                }

                if(tab[i][j] == '&'){
                    ijog = i;
                    jjog = j; 

                    break;
                }
            }
            
            if(tab[i][j] == '&')
                break;
        }                   
                    /* meu deus como eu ODEIO usar switch-case */

        switch(mov){
            case 'l':

            case 'L':
                return 4;

                break;

            case 'a':

            case 'A': /*verificar caso de ser parede em j-1, inimigo, bomba, etc*/

                if(tab[ijog][jjog-1] != ' ' && tab[ijog][jjog-1] != '@'){
                    tab[ijog][jjog] = '&';

                    return 5;
                }

                if(tab[ijog][jjog-1] == '@'){
                    return 1;
                }

                if(tab[ijog][jjog] != '*'){
                    tab[ijog][jjog]= ' ';
                    tab[ijog][jjog-1] = '&';

                    return 5;
                }

                if(tab[ijog][jjog] == '*'){
                    tab[ijog][jjog-1] = '&';
                }

                break;

            case 'd':

            case 'D': /*verificar caso de ser parede em j+1, inimigo, bomba, etc*/
                if(tab[ijog][jjog+1] != ' ' && tab[ijog][jjog+1] != '@'){
                    tab[ijog][jjog] = '&';

                    return 5;
                }

                if(tab[ijog][jjog+1] == '@'){
                    return 1;
                }

                if(tab[ijog][jjog+1] != '*'){
                    tab[ijog][jjog] = ' ';
                    tab[ijog][jjog+1] = '&';

                    return 5;
                }

                if(tab[ijog][jjog] == '*'){
                    tab[ijog][jjog+1] = '&';
                }

                break;

            case 's':

            case 'S': /*verificar caso de ser parede em i-1, inimigo, bomba, etc*/

                if(tab[ijog-1][jjog] != ' ' && tab[ijog-1][jjog] != '@'){
                    tab[ijog][jjog] = '&';

                    return 5;
                }

                if(tab[ijog-1][jjog] == '@'){
                    return 1;
                }

                if(tab[ijog-1][jjog] != '*'){
                    tab[ijog][jjog] = ' ';
                    tab[ijog-1][jjog] = '&';

                    return 5;
                }

                if(tab[ijog][jjog] == '*'){
                    tab[ijog-1][jjog] = '&';
                }

                break;

            case 'x':

            case 'X': /*verificar caso de ser parede em i+1, inimigo, bomba, etc*/

                if(tab[ijog+1][jjog] != ' ' && tab[ijog+1][jjog] != '@'){
                    tab[ijog][jjog] = '&';

                    return 5;
                }

                else if(tab[ijog+1][jjog] == '@'){
                    return 1;
                }

                else if(tab[ijog+1][jjog] != '*'){
                    tab[ijog][jjog] = ' ';
                    tab[ijog+1][jjog] = '&';

                    return 5;
                }

                if(tab[ijog][jjog] == '*'){
                    tab[ijog+1][jjog] = '&';
                }

                break;

            case 'b':
                
            case 'B':
                if(tem_bomba == 0){
                    tem_bomba = 1;

                    ibomba = ijog;
                    jbomba = jjog;

                    tab[ibomba][jbomba] = '*';


                    tempo_pra_explodir = time(0) + RAND(MEDIA_TEMPO, ERRO_TEMPO);
                }
                
                else if(tem_bomba == 1){
                    printf("Ja tem bomba no tabuleiro, espertao\n");

                    system(CLEAR);


                    return 5;
                }


            break;    
        }

        if(tab[ijog][jjog] != '*')
            tab[ijog][jjog] = '&'; 

        if(time(0) > tempo_pra_explodir && tempo_pra_explodir != -1){
            tem_bomba = 0;

            tempo_pra_explodir = -1;

            tab[ibomba][jbomba] = ' ';

            int m, n;

            for(m=ibomba-1; m<=ibomba+1; m++){
                for(n=jbomba-1; n<=jbomba+1; n++){
                    if(tab[m][n] != '+' && tab[m][n] != '|' && tab[m][n] != '_'){
                        if(tab[m][n] == '&'){
                            return 2;
                        }
                            
                        else{
                            tab[m][n] = ' ';
                        }

                    }
                }
            }
                
            return 5;
                
        }


    for(i=1; i<14; i++){
        for(j=1; j<24; j++){
            if(tab[i][j] == '@'){
                return 5;
            }
        }
    }

    return 4;
    
    }
}


void rankeada(){ /* eh aqui que eu vo faze a estrutura do ranking */ 

    FILE* fp = fopen("ranking.txt", "r");

    fscanf(fp,"%20s",ranking.nome);

    fscanf(fp,"%lld",&ranking.tempo);

    tipoRanking* p_ranking;

    int m = 0;
    while(!feof(fp)){
        m++;
        p_ranking = realloc(p_ranking, m);
        fscanf(fp, "%s %lld", p_ranking[m].nome, &p_ranking[m].tempo);
    }

    m++;

    p_ranking = realloc(p_ranking, m);

    int i = 0;

    while(ranking.tempo < p_ranking[i].tempo){ 
        i++;
    }
    
    tipoRanking aux;
    while(i < m){
        aux = p_ranking[i];
        p_ranking[i] = ranking;
        ranking = aux;
        i++;
    }

    free(fp);

    fclose(fp);
    
    /* p_ranking[m] = ranking; */

    /* qsort(p_ranking, p_ranking+m) */


}

void imprime_ranking(){
    printf("***********************RANKING***********************");

    FILE* p_imprime_ranking = fopen("ranking.txt", "a");

    fprintf(p_imprime_ranking, "%20s %lld\n", ranking.nome, ranking.tempo);

    fclose(p_imprime_ranking);

}

int main(){

    srand(time(0)); /* planta a semente da rand */
    
    FILE *fp;

    int opcao, tempo_total, contadora;

    do{
        system(CLEAR);

        inicializacao();

        scanf("%d", &opcao);

        getchar();

        if(opcao == 1){

            printf("digita aqui seu nomorolho pra gente te colocar ou nao no rank (limite de 20 caracteres): ");

            scanf("%[^\n]s", ranking.nome);

            printf("\n");

            getchar ();

            tempo_total = time (0) + 200;

            contadora = time (0);

            inicializacao2(); /* chama a funcao pra apresentar o menu */            

            obstaculos(); /* chama a funcao pra seta os inimigo, obstaculo, parede, etc */

            break;
        }

        if(opcao == 2){
            if(!(fp = fopen ("jogo.bin", "rb"))){
                printf("num tem jogo salvo, amado, para de manda migueh\n\n");
            }

            else{

                fread(&tab[0][0], 420, 1, fp);

                fread(&tempo_total, 8, 1, fp);

                tempo_total+= time (0);

                fread(&nome, 20, 1, fp); 

                break;
            }
        }

        if(opcao == 3){
            system(CLEAR);  

            FILE* abrir = fopen("ranking.txt", "r");

            if(!abrir){
                printf("num tem rank irmao, vai joga meu trabalho\n");
            }

            else{

                char rankadasso[26];

                int x;

                for(x=1; !feof(abrir); x++){
                    fscanf(abrir, "%[^\n]\n", rankadasso);

                    printf("%d\t\t%s\n", x, rankadasso);
                }

            }

            getchar();

        }

        if(opcao == 4){
            printf("brigadasso por jogar parcero\n\n");

            return 0;
        }

        if(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4){
            printf("para de gracinha e digita um numero de 1 a 4\n\n");
        }


    }while(opcao != 1 || opcao != 2 || opcao != 3 || opcao != 4);


    system (CLEAR); /* limpa o sistema pra fica style */
    char comecar_jogo; /* variavel pra ser usada na hora de dar enter */


    scanf("%c", &comecar_jogo); /* scanf usado >>>exclusivamente<<< pra ler o enter do teclado */

    if(comecar_jogo == '\n'){

        while(a){

            tempo_restante = tempo_total - contadora;

            contadora = time(0); /* toda vez que entra no loop, a contadora muda a time, e eh ai que a magica acontece: o tempo comeca a decrescer */
        
            if(tempo_restante <= 0){
                finalizacao(3);
            }

            else{  

                printf ("\n");

                system(CLEAR);

                printf("TEMPO: %lld\n\n", tempo_restante);

                printf("A = ESQUERDA\tD = DIREITA\tS = CIMA\nX = BAIXO\tB = BOMBA\tE = ENCERRAR\n\n");              

                imprimir();

                printf("\nMovimento: ");

                finalizacao(movimentos(getchar())); /* o funcionamento do jogo acontece todo nessa linha aqui, mas OLHA, o TRABAIO que essas duas funcao tao me dando, MEU AMIGO, compensava eu ter feito 84876497 coisas diferentes so pra nao ter que me dar ao luxo de usar apenas essa linha como funcionamento do jogo */
                

            }
        }
    
    }

    /* main(); */

    return 0;

}
