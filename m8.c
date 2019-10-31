#include<stdio.h>
#include<string.h>

char a, b, l, r, o;
string m[26];

int main(){

    int i, j;

    char p[5][5];

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            scanf("%c", &p[i][j]);
        }
    }
    for(i=0; i<26; i++){
        if(m[i] == 'o'){
            break;
        }
        else{
            scanf("%s", m[i]);
        }
    }

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(p[i][j] == ' '){

            }
        }
    }


}
