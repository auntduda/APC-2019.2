#include<stdio.h>

char caixaALTA(char c){

    if(c >= 97 && c <= 122){
        c = c - 32;
    }

    return c;
}

int main(){

    char s[105];

    int i=0;

    scanf("%s", s);

    while(s[i] != '\0'){
        printf("%c", caixaALTA(s[i]));

        i++;
    }

    return 0;

}
